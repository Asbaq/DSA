#include <iostream>
using namespace std;

//class
class Toeplitz
{
private:
 
 int *A;
 int n;

public:
 
 Toeplitz()
 {
 n=2;
 A = new int[3];
 }
 
 Toeplitz(int n)
 {
 this->n=n;
  //declaring array size
 A = new int[3*n-2];
 }
 
 ~Toeplitz()
 {
 delete []A;
 }
 
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 void Set2(int i,int j,int x);
 int Get2(int i,int j);
 void Display2();
 
 int GetDimension(){return n;}
};

//Setting Elements in an Array
void Toeplitz::Set(int i,int j,int x)
{
 	if(i<=j)
 	{
 		cout<<"j :"<<j-i<<endl;
 	  A[(j-i)]=x;
 	}
 	else if(i>j)
 	{
 		cout<<"d :"<<n+i-j-1<<endl;
	A[(n+i-j-1)]=x;
 	}
}

//Returning an Element from Array
int Toeplitz::Get(int i,int j)
{
	for(int i=1;i<=n;i++)
 	{
 for(int j=1;j<=n;j++)
 	{
 	if(i<=j)
 	{
 	 return A[(j-i)];
 	}
 	else if(j<i)
 	{
	  return A[(n)+(i-j-1)];
 	}
	}
	}
 return 0;
}

//Displaying Elements from Array in a form of Matrix
void Toeplitz::Display()
{ 
	
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i<=j)
 	cout<<A[j-i]<<" ";
 	else if(j<i)
 	cout<<A[(n)+(i-j-1)]<<" ";
 	}
 	cout<<endl;
 	}
}

int main()
{
	
 int d;
 cout<<"Enter Dimensions of an Toeplitz Array:";
 cin>>d;
 Toeplitz tm(d);
 
 int x;
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"j :"<<j-1<<endl;
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 tm.Set(i,j,x);
 }
 }
 
 tm.Display();
 cout<<endl<<tm.Get(2,2);
 return 0;
}
