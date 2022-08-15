class inheritence
{
   public static void main(String[] args) {
   	 Second s=new Second(67);
   
	 
   }
}
class First
{
	First(int a)
	{
		System.out.println("First class consturctor called");
	}
	void display()
	{
		System.out.println(("display method from first class is called "));
	}
}
class Second extends First
{
	public Second(int a)
	{
		super(a);
		System.out.println("Second class consturctor is called");

	}
	void display1()
	{
		System.out.println("display1 from Second class called");
	}
}
