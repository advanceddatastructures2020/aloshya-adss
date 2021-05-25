import java.util.Scanner;
public class Matrixadd
{
   public static void main(Sring[] args)
   {
     int p,q,m,n;
     Scanner s=new Scanner(System.in);
     system.out.print("enter no of rows in the 1st matrix:");
     p=s.netInt();
     system.out.print("enter no of columns in the 1st matrix:");
     q=s.nexInt();
     system.out.print("enter no of rows in the 2nd matrix:");    
     m=s.nexInt();
     system.out.print("enter no of columns in the 1st matrix:"); 
     n=s.nexInt();
if(p==m && q==n)
{
  int a[][] = new int[p][q];
  int b[][] = new int[m][n];
  int c[][] = new int[m][n];
  System.out.println("enter all the elements of  1st matrix:");
  for (int i = 0;i<p;i++)
       for(int j=0;j<q;j++)
           a[i][j]=s.nextInt();
  System.out.println("enter all the elements of 2nd matrix:");
  for (int i = 0;i<m;i++)
       for(int j=0;j<n;j++)
           b[i][j]=s.nextInt();
  System.out.println("First matrix");
  for(int i=0;i<p;i++) 
  {
     for(int i=0; j<q; j++)
         System.out.print(a[i][j]+"--");
     System.out.println("");
  }

  System.out.println("Second matrix");
  for(int i=0;i<m;i++) 
  {
     for(int i=0; j<n; j++)
         System.out.print(b[i][j]+"--");
     System.out.println("");
  }

  for(int i=0;i<p;i++)
     for(int j=0;j<n;j++)
        for(int k=0;k<q;k++)
  System.out.println("Matrix after addition");
  for(int i=0;i<p;i++)
  { 
    for(int j=0;j<n;j++)
         System.out.print(c[i][j]+"--");
    System.out.println("");
   }
        }
        else
        {
            System.out.println("Addition would not be possble");
        }
   }