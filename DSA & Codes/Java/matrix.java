import java.util.*;
class matrix
{


public static void main(String args[])
{


	final int rows=2;
	int[][] a=new int[rows][rows];
	int[][] b=new int[rows][rows];
	int[][] result=new int[rows][rows];
	Scanner obj=new Scanner(System.in);
	
	System.out.println("enter the elements in the first matrix");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<rows;j++)
		a[i][j]=obj.nextInt();
	}
	System.out.println("enter the elements in the second matrix");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		b[i][j]=obj.nextInt();
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		result[i][j]=a[i][j]+b[i][j];
	}
	System.out.println("the resultant matrix is");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		System.out.print(result[i][j]);	
	System.out.println("");
	}
}
}
