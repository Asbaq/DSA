import java.io.*;
import java.lang.*;
class multiplecatch
{
 	public static void main(String args[])
	{ 
	int n=0;
	try{
          n=args.length;
	  int a=5/n;
	}
	catch(ArithmeticException ae)
	{
	 System.out.println(ae);
	}
	catch(Exception e)
	{
 	 System.out.println(e);
	}
	finally
	{
	System.out.println("Inside finally");
	}
	System.out.println(n);
	}
}