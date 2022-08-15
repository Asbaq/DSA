class hello
{
	public static void main(String[] args) {
		
		innertest.display1();
	}
}
class outertest
{
    public static class innertest{

	public static  void display1()
	{
		System.out.println("inside display hello");
	}
    }
}