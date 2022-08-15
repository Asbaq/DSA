import java.io.*;
import java.lang.*;
class mythread implements Runnable
{
   int count=1;  
  public void run(){

       while(count<=100)
	{
           System.out.println(" mythread  " +count++);
        }
   }

}
class test15
{
 public static void main(String args[])throws Exception
{
    mythread m1=new mythread();
    Thread t=new Thread(m1);
    t.start();
    int count=1;
    while(count<=100)
    {
       System.out.println(" main thread " + count++);
       Thread.yield();
  
    }
  
  
}
}