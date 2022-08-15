import java.io.*;
import java.lang.*;
class sample
{

	static void method1()
	{
		try
		{
			System.out.println("inside the sample class");
			throw new NullPointerException("Exception data");
		}
		catch(NullPointerException np)
		{
			System.out.println(np);
		}
	}
}
class test21
{

	public static void main(String args[])
	{
   	  sample.method1();
	}
}