import java.io.*;
import java.lang.*;
class firstexception extends Exception
{
	static int accno[]={100,101,102,103,104};
	static String name[]={"abc","def","ghi","jkl","mno"};
	static double amount[]={ 1234.54,3463.23,6342.65,2367.252,54634.13};
	firstexception(String str)
	{
		super(str);
	}
	public static void main(String args[])
	{
		try
		{
			System.out.println("account " + "name  " + "amount ");
			for(int i=0;i<5;i++)
			{
				System.out.println("account " + "name  " + "amount ");
				if(amount[i]<1500)
				{
					firstexception fe=new firstexception("balance is low");
					throw fe;
				}
			}
		}
		catch(firstexception fe)
		{
			fe.printStackTrace();
		}
	}
}	
	