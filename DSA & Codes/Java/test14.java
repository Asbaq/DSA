import java.io.*;
import java.lang.*;
class reservation implements Runnable
{
    int available_seat=1;
    int wanted_seat;
    reservation(int i)
    {
       wanted_seat=i;
  
    }
    public void run()
    {
        synchronized(this)
        {
        System.out.println("available seats are  " + available_seat);
        if(available_seat>=wanted_seat)
	{
           String name=Thread.currentThread().getName();
           System.out.println(wanted_seat  + " allocated to  " + name);
           try
           {
                Thread.sleep(1500);
                available_seat=available_seat-wanted_seat;
           }
           catch(InterruptedException e){}
        }
        else
        System.out.println("no berths available");
        }
    }
   

}
class test14
{
  public static void main(String argsp[])
  {
       reservation r1= new reservation(1); 
       Thread t1=new Thread(r1);
       Thread t2=new Thread(r1);  
       t1.setName("aman");
       t2.setName("notAman");
       t1.start();
       t2.start();

  }

}