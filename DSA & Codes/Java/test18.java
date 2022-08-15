import java.io.*;
import java.lang.*;
class producer extends Thread
{
  StringBuffer bb;
  boolean flag=false;
  public producer()
  {
    bb=new StringBuffer();
  }
  public void run()
  {
    
      for(int i=1;i<=10;i++)
      {
          try 
          {
            bb.append(i);
            Thread.sleep(100);
            System.out.println("appending");
          }
          catch(Exception e){}
       }
          
       flag=true;
       
     
   }
}
class consumer extends Thread
{
  producer prod;
  public consumer(producer prod)
  {
   this.prod= prod;
  }
  public void run()
  {
      
          try  
            { 
              while(!prod.flag)
                    Thread.sleep(25);

             }
          catch(Exception e){}
          System.out.println(prod.bb);
       
   }
}
class test18
{

 public static void main(String args[])throws Exception
 {
   producer p=new producer();
   consumer c=new consumer(p);
   Thread t1=new Thread(p);
   Thread t2=new Thread(c);
   t2.start();
   t1.start();
  }
}