#include<stdio.h>
struct disjset
{
int parent[10];
int rank[10];//rank [i] is the hight of the tree representing the set.
int n;
}dis;
//create n single item set.
void makeset()
{
for(int i=0;i<dis.n;i++)
{
dis.parent[i]=i;
dis.rank[i]=0;
}
}
//display disjoint set
void displayset()
{
int i;
printf("\n parent aray \n");
for(i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i]);
}
printf("\n rank array \n");
for(int i=0;i<dis.n;i++)
{
printf("%d",dis.rank[i]);
}
printf("\n");
}
//finds set of given item x
int find(int x)
{
//find the representative of the set
//that x is an element of
if(dis.parent[x]!=x)
{
//if x is not the parent of itself
//then x is not the representative of his set.
dis.parent[x]=find(dis.parent[x]);
//so we recursively call find on its parent
//and move i's node directly under the representative of this set
}
return dis.parent[x];
}
//do union of two set represented
//by x and y
void union(int x,int y)
{
//find current set of x and y.
int xset=find(x);
int yset=find(y);
//if they are already in same set
if(xset==yset)
return;
//put smaller ranked item under
//bigger ranked item if rank are different
if(dis.rank[xset] < dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset] > dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=-1;
}
//if rank are same, then increment rank
else
{
dis.parent[yzet]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;
}
}

int main()
{
int n,x,y;
printf("how many elements");
scanf("%d",&dis.n);
makeset();
int ch,wish;
do
{
printf("\n_____menu_____\n");
printf("1.union \n2.find\n 3.display\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
   printf("enter elements to perform union");
   scanf("%d%d",&x,&y);
   union(x,y);
   break;
case 2:
   printf("enter elements to check if connected components");
   scanf("%d%d",&x,&y);
   if(find(x)==find(y))
   printf("connected components\n");
   else
   printf("not connected components\n");
   break;
case 3:
   displayset();
   break;
}
printf("\n do you wish to continue ?(1/0)\n");
scanf("%d",&wish);
}
while(wish==1);
return 0;
}
