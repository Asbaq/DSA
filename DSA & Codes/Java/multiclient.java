import java.io.*;
import java.net.*;
import java.lang.*;
public class multiclient
{

	public static void main(String args[])throws IOException
	{
	Socket s=new Socket("192.168.1.2",999);
	BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
	String str;
	while((str=br.readLine())!=null)
	System.out.println(str);
	br.close();
	s.close();
	}
}
