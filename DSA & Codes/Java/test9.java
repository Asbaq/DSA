import java.lang.*;
import java.io.*;
class mythread extends Thread
{
public boolean stop= false;
public void run()
{
  for(int i=1;i<=1000;i++)
  {
   System.out.println(i);
   if(stop)return;
  }
}

}
class test9
{

public static void main(String args[])throws IOException
{

 mythread m1=new mythread();
 Thread t=new Thread(m1);
 t.start();
 System.in.read();
 m1.stop=true;

}

}
