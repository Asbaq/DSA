import java.util.Scanner;
class test
{
public static void main(String args[])
{
	int a=5;
	int b=10;
	System.out.println("enter 1 to add, 2 to substract, 3 to multiply, 4 to divide");
	Scanner scanner=new Scanner(System.in);
	int ch=Integer.parseInt((scanner.nextLine()));
  switch(ch)
{
	case 1:
	System.out.println(a+b);
	break;
	case 2:
	System.out.println(a-b);
	break;
	case 3:
	System.out.println(a*b);
	break;
	case 4:
	System.out.println(a/b);
	break;
	default :
	System.out.println("wrong choice");
}
}
}