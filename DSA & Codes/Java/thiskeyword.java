class thiskeyword
{
 public static void main(String args[])
{
	employee e1=new employee(4,"aman",8900.0f);
	e1.display();
}
}



class employee
{
  	int id;
	String name;
	float salary;
public employee(int id,String name,float salary)
{
   	this.id=id;
	this.name=name;
	this.salary=salary;
}
public void display()
{
	System.out.println(id);
}
}

