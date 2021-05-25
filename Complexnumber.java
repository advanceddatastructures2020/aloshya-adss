public class Complexnumber
{
//for real and imaginary parts of complex numbers
  double real,img;
//constructor to initialize the complex number
  Complexnumber(double r,double i)
  {
    this.real = r;
    this.img = i;

  }
  public static Complexnumber sum(Complexnumber c1,Complexnumber c2)
  {
   //creating a temporary complex number to hold the sum
   Complexnumber temp = new Complexnumber(0,0);
   temp.real=c1.real+c2.real;
   temp.img=c1.img+c2.img;
         return temp;
  }
  public static void main(String args[])
  {
  Complexnumber c1 = new Complexnumber(5.5,4);
  Complexnumber c2 = new Complexnumber(1.2,3.5);
  Complexnumber temp = sum(c1,c2);
  System.out.println("sum is : "+temp.real+"+"+temp.img+"i");
  }
}