import java.io.*;
import java.lang.*;
class negativeException extends Exception
{
 	public string toString()
	{
		return "Length or/and must not be negetive";
	}
}
class test22
{
static int area(int length,int breath)throws negativeException
{
	if(length<0 || breath <0)
		throw new negativeException();
	return length*breath;
}

static void method1()throws negativeException
{
	System.out.println("area is  "+ area(10,5));
}
public static void main(String args[])
{
	try
	{
		method1();
	}
	catch(negativeException e)
	{
		System.out.println(e);
	}
}
}
		