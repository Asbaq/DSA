class StaticClass
{
	public static void main(String[] args) {
		test1 t=new test1();
		t.display();
	}
}
class outertest
{
 public static class test1{

	public void display()
	{
		System.out.println("inside display hello");
	}
}
}