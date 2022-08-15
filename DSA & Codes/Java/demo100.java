import java.io.*;
import java.lang.Exception;
class demo100
{
	public static void main(String[] args)
	{
		int[] a =new int[5];
		for(int i=0;i<5;i++)
			a[i]=i;

		try
		{
			//System.out.println(a[6]);
			System.out.println(4/0);
		}
		catch(IndexOutOfBoundsException e)
		{
			System.out.println("Index exception  caught");
		}
		catch(ArithmeticException e)
		{
			System.out.println("Arithmetic exception caught");
		}
		

	}
}