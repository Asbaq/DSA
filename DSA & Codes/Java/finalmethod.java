class one
{
	final void method1()
	{
		System.out.println("one class method1");
	}
}
class two
{
	void method2()
	{
		System.out.println("two class method2");
		method1();
	}
}
class finalmethod
{

 public static void main(String[] args) {
 	two t=new two();
 	t.method2();
 }
}