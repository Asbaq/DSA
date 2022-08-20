#include <iostream>
using namespace std;

//creating class
class Tri_Diagonal
{
private:
 
 int *A;
 int n;

public:
 
 Tri_Diagonal()
 {
 n=2;
 A = new int[3];
 }
 
 Tri_Diagonal(int n)
 {
 this->n=n;
 //declaring array size
 A = new int[3*n-2];
 }
 
 ~Tri_Diagonal()
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
void Tri_Diagonal::Set(int i,int j,int x)
{
	
 if(i-j == -1)
 {
   A[(i-1)]=x;
 }
 else if(i-j == 0)
 {
   A[(n-1)+(i-1)]=x; 	
 }
 else if(i-j == 1)
 {
   A[(2*n-1)+(i-1)]=x;
 }
}

//Returning an Element from Array
int Tri_Diagonal::Get(int i,int j)
{

 if(i-j == -1)
 {
   return A[i-1];
 }
 else if(i-j == 0)
 {
   return A[(n-1)+(i-1)];	 	
 }
 else if(i-j == 1)
 {
   return A[(2*n-1)+(i-1)];	
 }
 return 0;
}

//Displaying Elements from Array in a form Matrix
void Tri_Diagonal::Display()
{ 
	
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i-j == -1)
 	{
 	  cout<<A[(i-1)]<<" ";
 	}
 	else if(i-j == 0)
 	{
	  cout<<A[(n-1)+(i-1)]<<" ";
 	}
 	else if(i-j == 1)
 	{
 	  cout<<A[(2*n-1)+(i-1)]<<" ";
 	}
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}

int main()
{
	
 int d;
 cout<<"Enter Dimensions of an Tri_Diagonal Array:";
 cin>>d;
  // creating Object
 Tri_Diagonal dm(d);
 
 int x;
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 dm.Set(i,j,x);
 }
 }
 
 dm.Display();
 //dm.Get(2,2);
 return 0;
}
