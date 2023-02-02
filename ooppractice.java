class A
{
    private int a,b;
    protected int x,y;
    public
    A()
    {
        x=10;
        y=20;
    }
    void display()
    {
        a=10;
        b=20;
       System.out.println(a+" "+b);
    }
}
class B extends A{
    void show()
    {
        System.out.println(x+" "+y);
    }
}
public class ooppractice {
 public static void main(String[] args) {
     A a=new A();
     B b=new B();
     b.show();
 }
}
