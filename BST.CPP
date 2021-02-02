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
//recursive fn to performinorder  traversal of the tree
void inorder(struct btnode *t)
{
if(root== NULL)
{
 printf("no elements  in a tree to display");
 return;




