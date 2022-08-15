import java.io.*;
class sample
{
	String name;
	void accept() throws IOException
	{
		BufferedReader  br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("enter your name");
		name=br.readLine();
	}
	void display()
	{
		System.out.println("name " + name);
	}
  
}
class test20
{

	public static void main(String args[]) throws IOException
	{
		sample s=new sample();
		s.accept();
		s.display();
	}
}
