class interfaces
{
	public static void main(String[] args) {
	   oracle o=new oracle();
	   o.connect();
	   o.disconnect();
	}
}
interface Myinterface
{
	void connect();
	void disconnect();
}
class oracle implements Myinterface{

	public void connect()
	{
			System.out.println("connecting to the oracle database.....");
	}
	public void disconnect()
	{
			System.out.println("disconnecting to the oracle database..");
	}
}
class Sybase implements Myinterface{

	public void connect()
	{
			System.out.println("connecting to the Sybase database.....");
	}
	public void disconnect()
	{
			System.out.println("disconnecting to the Sybase database..");
	}
}