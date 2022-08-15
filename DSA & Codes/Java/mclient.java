import java.io.*;
import java.lang.*;
import java.net.*;
public class mclient
{
   public static void main(String args[])
   {
     try
	{ 
	Socket s1=new Socket("192.168.1.2",8080);
	DataOutputStream dos=new DataOutputStream(s1.getOutputStream());
	dos.writeUTF(" I am learning java sockets");
	dos.close();
	s1.close();
	}
    catch(IOException ie)
        { 
             ie.printStackTrace();
        }
     }
}