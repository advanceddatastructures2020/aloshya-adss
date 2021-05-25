//implimenting acess modifier(private,default,protect,public)

class Acess
{
 private int data=40;
 private void msg()
 {
   System.out.println("hello java");
 }
public class Simplepr
{
 public static void main(String args[])
 {
  Acess obj=new Acess();
  System.out.println(obj.data);
  obj.msg();
 }
}}