public class practiceoop
{
    public static void main(String[] args) {
        B b=new B();
        b.display();
        b.display2();
    }
}
interface A
{
     void display();
     void display2();
}
class B implements A
{
  public void display()
   {
    System.out.println("interface1");
   }
   public void display2()
   {
       System.out.println("interface2");
   }
}
