class Initializer_class
{
	public static void main(String[] args) {
		
		test t1=new test();
		test  t2=new test();//initializer block only called at the time of memory allocation
		t2.display();
	}
}
class test
{
	{
		System.out.println("Initializer_class called");
	}
	public void display()
	{
		System.out.println("display method called");
	}
}