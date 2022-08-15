import java.lang.*;
import java.io.*;
import java.net.*;

public class mserver
{

 public static void main(String args[])
 {
    try
    {
        ServerSocket ss=new ServerSocket(8080);
	System.out.println(" Waiting for the client to connect on port 8080");
        Socket s1=ss.accept();
	System.out.println("Connection established");
	DataInputStream dis=new DataInputStream(s1.getInputStream());
	String data=dis.readUTF();
	System.out.println("Data Received " + data);
	dis.close();
	ss.close();
    }
    catch(IOException ie)
    {
       ie.printStackTrace();

    }
 }
}