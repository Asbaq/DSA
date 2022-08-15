import java.io.*;
import java.lang.*;
class test19
{
 	public static void main(String args[])
	{ 
	try{
          Thread.sleep(1000);
	}
	catch(InterruptedException e)
	{
 	 System.out.println(e);
	}
	finally
	{
	System.out.println("Inside finally");
	}
	System.out.println("Hello");
	}
}