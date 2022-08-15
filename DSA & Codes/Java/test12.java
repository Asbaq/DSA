import java.io.*;
import java.lang.*;
class mythread implements Runnable
{
  
  public void run(){


   }

}
class test12
{
 public static void main(String args[])throws Exception
{
   Thread t1 = new Thread(new mythread());
   System.out.println("id  " + t1.getId());  
   System.out.println("Name "+ t1.getName());
   System.out.println("priority  "+ t1.getPriority());
   System.out.println(" state "+ t1.getState());
   System.out.println(" alive  "+ t1.isAlive());

}
}