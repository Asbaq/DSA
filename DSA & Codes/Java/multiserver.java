import java.io.*;
import java.net.*;
import java.lang.*;

public class multiserver implements Runnable
{

   static ServerSocket ss;
   static Socket s1;
   public void run()
   {
        String name=Thread.currentThread().getName();
	for(;;)
	{
		try
		{
		System.out.println(" Thread  " + name + " Ready to accept");
		s1=ss.accept();
		System.out.println(" Connection has been established");
		PrintStream ps=new PrintStream(s1.getOutputStream());
		ps.println("send me the question");
		ps.close();
		s1.close();
		}
		catch(IOException ie)
		{}
	}
    }

public static void main(String args[])throws Exception
{
	multiserver ms1=new multiserver();
	ss=new ServerSocket(999);
	Thread t1=new Thread(ms1,"Thread1");
	Thread t2=new Thread(ms1,"Thread2");
	t1.start();
	t2.start();
} 
}