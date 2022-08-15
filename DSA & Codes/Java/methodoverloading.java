import java.util.*;

class methodoverloading
{
	public static void main(String args[])
	{
		test1 t=new test1();
		t.display();
		t.display(4);
	}
}
class test1
{
	public void display(int a)
	{
	System.out.println("this is the first display function");
	}
	public void display()
	{
	System.out.println("this is the second display function");
	}
}