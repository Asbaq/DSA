import java.io.*;
import java.lang.*;
class mythread implements Runnable
{
   int count=1;  
  public void run(){

       while(true)
	{
           System.out.println(count++);
        }
   }

}
class test13
{
 public static void main(String args[])throws Exception
{
   Thread t1 = new Thread(new mythread());
   t1.setDaemon(true);
    t1.start();
   try
   {
       Thread.sleep(2000);
   }
   catch(Exception e)
   {
      e.printStackTrace();
   }
  
}
}