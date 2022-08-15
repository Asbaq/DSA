import java.lang.*;
import java.io.*;
class mythread implements Runnable
{

 public void run()
{

 func1();
 func2();
 func3();
}
void func1()
{
  System.out.println("This is func1 class");
}
void func2()
{
  System.out.println("This is func2 class");
}
void func3()
{
  System.out.println("This is func3 class");
}
}
class test10
{
 public static void main(String args[])throws IOException
{
   mythread m1=new mythread();
   Thread t1=new Thread(m1);
   t1.start();
}
}