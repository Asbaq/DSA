class FinalAreas
{
	 public static void main(String[] args) {
	 	figure f =new rectangle(5,6);
	 	f.area();
	 	f=new triangle(4,5);
	 	f.area();

	 }
}
class figure
{
	double diim1;
	double diim2;
	figure(double a,double b)
	{
		diim1=a;
		diim2=b;
	}
	double area()
	{
		System.out.println("inside area"+diim2*diim1);
		return diim2*diim1;
		 
	}
}
class rectangle extends figure
{
	rectangle(double a,double b)
	{
		super(a,b);
	}
	double area()
	{
		System.out.println("Inside rectangle"+diim2*diim1);
		return diim2*diim1;
	}
}

class triangle extends figure
{
	
	triangle(double a,double b)
	{
		super(a,b);
	}
	double area()
	{
		System.out.println("triangle"+diim2*diim1);
		return diim2*diim1;
		 
	}
}