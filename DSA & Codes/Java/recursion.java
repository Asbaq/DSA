import java.util.*;
class factorial
{

	public int fact(int n)
	{
	if(n==0||n==1)
	return n;
	else
	return n*fact(n-1);
	}
}
class recursion
{
	public static void main(String args[])
	{
	
	System.out.println("enter a number for finding it's factorial");
	Scanner myobj=new Scanner(System.in);
	int number=myobj.nextInt();
	factorial f=new factorial();
	System.out.printf("the factorial of %d is %d",number,f.fact(number));
	}
}