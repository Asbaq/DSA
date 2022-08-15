import java.io.*;
import java.lang.*;
class add implements Runnable
{
  public  static int a=0;
  public void run()
  {
   for(int i=0;i<10;i++)
   System.out.println(a++);

  }
}

class test17
{
  public static void main(String args[])
  { 
   long start= System.currentTimeMillis();
   Thread t1=new Thread(new add());
   Thread t2=new Thread(new add());
   Thread t3=new Thread(new add());
   Thread t4=new Thread(new add());
   Thread t5=new Thread(new add());
   Thread t6=new Thread(new add());
   Thread t7=new Thread(new add());
   Thread t8=new Thread(new add());
   Thread t9=new Thread(new add());
   Thread t10=new Thread(new add());
    t1.start();
    t2.start();
    t3.start();
    t4.start();
    t5.start();
    t6.start();
    t7.start();
    t8.start();
    t9.start();
    t10.start();
    try
    {
      t1.join();
      t2.join();
      t3.join();
      t4.join();
      t5.join();
      t6.join();
     /* t7.join();
      t8.join();
      t9.join();
      t10.join();*/

    }
    catch(InterruptedException eo){}
   long end= System.currentTimeMillis();
   long diff=end-start;
   System.out.println("ELapsed time is " +diff);
}
}
   
  