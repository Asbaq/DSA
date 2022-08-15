import java.lang.*;
import java.io.*;
class mythread implements Runnable
{
	String str;
	mythread(String str)
	{
	 this.str=str;
	}
	public void run()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println(str + "   " + i);
			
			try
			{
				Thread.sleep(2000);
			}
			catch(InterruptedException ie)
			{
				ie.printStackTrace();
			}
		}
	}

}
class test11
{
    public static void main(String args[])
    {	
	 mythread m1 =new mythread("cut the ticket ");
	 mythread m2 =new mythread("show the ticket");
	 Thread t1=new Thread(m1);
	 Thread t2=new Thread(m2);
	 t1.start();
	 t2.start();
    }
}