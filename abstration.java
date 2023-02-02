
abstract class A // Abstract Class 
{
    // Abstract method without body
    abstract void display();
    // Normal method
    void show()
    {
        System.out.println("Class A");
    }
}
class B extends A
{
    // Body of Abstract method
    void display()
    {
        System.out.println("Implementation of Abstract Method");
    }
}
public class abstration{
    public static void main(String[] args) {
        B b=new B();
        b.display();// abstract method calling
        b.show();
    }
}
