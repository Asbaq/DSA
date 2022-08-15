class One
{
	final float PI=3.14f;
	final void method(final int X)
	{
		System.out.println("PI value="+PI);
		System.out.println("X value="+x);
	}
}
class Two
{
	void method(int p)
	{
		One o=new One();
		o.method(p);
	}
}
class FinalVarMethod
{
public static void main(String args[])
{
	Two t=new Two();
	t.method(10);
}
}