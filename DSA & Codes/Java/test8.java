import java.io.*;
import java.lang.*;
abstract class shape
{
abstract public double perimeter();
abstract public double area();
}
class circle extends shape
{
double radius;
public double perimeter()
{
return 2*Math.PI*radius*radius;
}
public double area()
{
   return 5;
}

}
class rectangle extends shape
{
double length;
double breath;
public double perimeter()
{
 return 2*(length+breath);
}
public double area()
{
 return length* breath;
}
}
public class test8
{
 public static void main(String[] args)
{
rectangle r1=new rectangle();
r1.length=10;
r1.breath=20;
shape s=r1;
System.out.println(s.area());
System.out.println(s.perimeter());
}
}

