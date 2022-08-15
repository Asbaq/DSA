import java.io.*;
import java.lang.*;   
class customer implements Runnable
{
   String name;
   int balance;
   public customer(String name,int balance)
   { 
     this.name=name;
     this.balance=balance;
   }
   public void run()
   {
    synchronized(this)
    {
    usesatm();
    }
   }
    public void usesatm()
   {
    
     //System.out.println("Hello Mr." + name);
     for(int i=0;i<10;i++)
     System.out.println(Thread.currentThread().getName());
    // deposit(name,5000);
    // withdraw(name,3000);
     
   }
   
   /*void withdraw(String name,int amount)
   {
      
      balance-=amount;
      try{
             Thread.sleep(2000);
      }
      catch(Exception eo){}
      System.out.println(name + "  Balance  :   " + balance);
 
   }
   void deposit(String name,int amount)
   { 
       
  try{
             Thread.sleep(2000);
      }
      catch(Exception eo){}
        balance-=amount;
      System.out.println(name + "  Balance  :   " + balance);
   }*/    
}
class test16
{

  public static void main(String args[])
  {
    customer c1=new customer("Aman",15000);
    customer c2=new customer("Notaman",10000);
    Thread t1=new Thread(c1);
    Thread t2=new Thread(c2);
    t1.setName("aman");
    t2.setName("notaman");
    t1.start();
    try
    {
    t1.join();
    }
    catch(InterruptedException er){}
    t2.start();
    
  }
}
    