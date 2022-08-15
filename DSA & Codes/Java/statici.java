class statici
{
	public static void main(String[] args) {
		temp t=temp.create(20);
		t.display();
	}
}
class temp
{
	private int data;
	private temp(int a)
	{
		data=a;
	}
	protected static temp create(int data)
	{
		return new temp(data);
	}
	public void display()
	{
		System.out.println(data);
	}
}