class StaticInnerClass
{
	final int a=3; // finaliser are constants so 
 public static void main(String[] args) {
 	outer.StaticInnerClass.func(4);
 	outer.StaticInnerClass.func(5);
 }
}
class outer
{
	static int a;
	 public static class StaticInnerClass{  //class is static so that it can be accessed without an object and class is public so that it can be acessed anywhere in the program

	 	static int b;
	 	static int c;
	 	static {
	 	   b=10;                       //static block is only called once for a class unlike initializer block where the block is called for each object once
	 	   c=5;	
	 	   System.out.println("hello");
	 	}
	 	public static  void func(int a)
	 	{
	 		outer.a=a;
	 		System.out.println("from inside the inner class "+a+b+c);
	 	}

	}
}