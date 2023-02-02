


interface A
{
    void display();
    void display2();
}
class im implements A
{
    public void display()
    {
        System.out.println("display 1");
    }
    public void display2()
    {
        System.out.println("display 2");
    }
}
public class inter {

    public static void main(String[] args) {
      im obj=new im();
      obj.display();
      obj.display2();
    }
}
