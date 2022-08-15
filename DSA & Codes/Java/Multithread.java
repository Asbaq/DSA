import java.lang.*;
import java.lang.Thread;
public class myThread extends Thread
{
    public void run()
    {
        try {
           
            System.out.println(
                "Thread " + Thread.currentThread().getId());    
        }
        catch (Exception e) {
           
            System.out.println("Exception");
        }
    }
}
 
public class Multithread {
    public static void main(String[] args)
    {
        myThread m=new myThread();
	Thread t1=new Thread(m);
	Thread t2=new Thread(m);
	t1.start();
	t2.start();

    
    }
}