import java.util.*;
// First Thread
class mytask1 extends Thread
{
    @Override
    public void run() {
        for(int i=1;i<=5;i++)
        {
            System.out.println("Thread  1");
        }
    }
}
// Second Thread
class mytask2 extends Thread
{
    @Override
    public void run() {
        for(int i=1;i<=5;i++)
        {
            System.out.println("Thread  2");
        }
    }
}
// Main Thread
public class oopinjava {
     public static void main(String[] args) {
         mytask1 mytask1=new mytask1();
         mytask2 mytask2 =new mytask2();
         // start() function internally calling the run method

         // Task 1
         mytask1.start();
         // Task 2
         for(int i=1;i<=5;i++)
         {
             System.out.println("Thread main");
         }
         // Task 3
         mytask2.start();
         
    }
}
