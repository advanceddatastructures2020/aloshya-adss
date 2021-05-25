class Dog
{
  //instance variables
  String name;
  int age;

  //constructor declaration of calss
  public Dog(String name,int age)
  {
      this.name=name;
      this.age=age;
  }
  public void getname()
  {
   	System.out.println(name);
  }
  public void getage()
  {	
  	System.out.println(age);
  }
public static void main(String a[])
{
   Dog tuffy = new Dog("tuffy",5);
   tuffy.getname();
   tuffy.getage();	
}
}