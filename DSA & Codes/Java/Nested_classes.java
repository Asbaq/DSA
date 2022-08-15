class Nested_classes
{
	public static void main(String[] args) {
		
	
	
		outer o=new outer(4,5);
		o.display();
}

}
class inner
{
	private int a;
	protected int b;
	public inner(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	 protected void display()
	{
		System.out.printf("a is %d ,b is %d",a,b);
		System.out.println();
	}
}
class outer
{
	inner i;
	public outer(int a,int b)
	{
			i=new inner(a,b);
	}
	public void display()
	{
		i.display();
	}
	
}
