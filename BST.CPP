//prgm to construct binary searchtree and perform deletion inorder traversal on it
#include<stdio.h>
#include<stdlib.h>
struct btnode
{
  int value;
  struct btnode *l;
  struct btnode *r;
}*root=NULL,*temp=NULL,*t2,*t1;
void delete1();
void insert();
void delete();
void inorder(struct btnode *t);
void creat();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
void search1(struct btnode *t int data);
int smallest(struct btnode *t);
int largest(struct btnode *t);

int flag=1;

void main()
{
  int ch;
  printf("\n OPERATIONS");
  printf("\n 1.insert an element to tree \n");
  printf("\n 2.delete an element from the tree \n");
  printf("\n 3.inorder traversal");
  printf("\n 4.preorder traversal");
  printf("\n 5.postorder traversal\n");
  printf("\n 6.Exit \n");
 while(1)
 {
   printf("\n enter your choice");
   scanf("%d",&ch);
   switch(ch);
   {
   case 1:
	insert();
	break;
   case 2:
	delete();
	break;
   case 3:
	inorder(root);
	break;
   case 4:
	preorder(root);
	break;
   case 5:
	postorder(root);
	break;
   case 6:
       exit(0);
   default:
	 printf("wrong choice .plz enter correct choice");
	 break;
      }
   }
getch();
}
/*to insert a node in the tree */
void insert()
{
  create();
  if(root==NULL)
    root=temp;
  else
    search(root);
}
//to create a node

void create()
{
int data;
printf("enter data of node to be inserted");
scanf("%d",&data);
temp=(struct btnode *)malloc(l*sizeof(struct btnode));
temp->value=data;
temp->l=temp->r=NULL;
}

// fn to search the approriateposition to insert the new node
void search(struct btnode *t)
{
if((temp->value->t->value) && (t->r!=NULL))//value morethan root nood value insert at right
   search(t->r);
else if((temp->value > t->value) && (t->r==NULL))
  t->r=temp
else if((temp->value < t->value) && (t->l !=NULL))//value < rootnode value insert at left
   search(t->l);
else if((temp->value < t->value) && (t->l==NULL))
   t->l= temp;
}
//recursive fn to perform inorder  traversal of the tree
void inorder(struct btnode *t)
{
if(root== NULL)
{
 printf("no elements  in a tree to display");
 return;
}
if(t->1 != NULL)
    inorder(t->l);
printf("%d->",t->value);
if(t->r != NULL)
    inorder(t->r);
}
//to check for the deleted node
void delete()
{
int data;
if(root == NULL)
{
  printf("No elements in a tree to delete");
  return;
}
printf("Enter the data to be deleted:");
scanf("%d",&data);
t1=root;
t2=root;
search1(root,data);
}
//to find the preorder traversal
void preorder(struct btnode *t)
{
 printf("no element in a tree to display");
 rerurn;
}
printf("%d->",t->value);
if(t->l !=NULL)
  preorder(t->l);
if(t->r != NULL)
  preorder(t->r);
}

//to find the postorder traversal the postorder traversal
void postotder(struct btnode *t)
{
  if(root == null)
  {
    printf("No element in a tree to display");
    return;
  }
  if(t->l != NULL)
      postorder(t->l);
  if(t->r != NULL)
     postorder(t->r);
  printf("%d-> ",t->value);
}
//search for the appropriate position to insert the new node
void search1(struct btnode *t,int data)
{
  if((data>t->value))
  {
    t1=t;
    search1(t->r,data);
  }
  else if(( data <t->value)
  {
    t1=t;
    search1(t->l,data);
  }
  else if((data==t -> value))
  {
    delete1(t);
  }
}
//to delete a node
void delete1(struct btnode *t)
{
  int k;
  //to delete leaf node
  if(t1->l==t)
  {
    t1->l = NULL;
  }
  else
  {
    t1->r = NULL;
  }
  t = NULL;
  free(t);
  return;
  }
  //to delete node having one lefthand child
 else if((t->r==NULL))
 {
   if(t1==t)
   {
     root=t->l;
     t1=root;
   }
   else if(t1->l==t)
   {
