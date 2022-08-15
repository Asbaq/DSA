public class ConstructorOverloadingEx
{
	public Test()
	{
		System.out.print("1");
		new Test(10);
		System.out.print("5");
	}
	public Test(int temp)
	{
		System.out.print("2");
		new Test(10, 20);
		System.out.print("4");
	}
	public Test(int data, int temp)
	{
		System.out.print("3");
		
	}
	
	public static void main(String[] args)
	{
		Test obj = new Test();
		
	}
	
}