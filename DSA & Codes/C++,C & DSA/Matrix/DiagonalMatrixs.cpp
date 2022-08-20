
#include <iostream>
using namespace std;

//Creating class 
class Diagonal
{
private:
 
 int *A;
 int n;

public:
 
 Diagonal()
 {
 n=2;
 A = new int[2];
 }
 
 Diagonal(int n)
 {
 this->n=n;
 
 //declaring array size
 A = new int[n];
 }
 
 ~Diagonal()
 {
 delete []A;
 }
 
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 
 int GetDimension(){return n;}
};

//Setting Elements in an Array
void Diagonal::Set(int i,int j,int x)
{
 if(i==j)
 A[i]=x;
}

//Returning an Element from Array
int Diagonal::Get(int i,int j)
{
 if(i==j)
 return A[i];
 return 0;
}

//Displaying Elements from Array in a form Matrix
void Diagonal::Display()
{
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<n;j++)
 	{
 	if(i==j)
 	cout<<A[i]<<" ";
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}


int main()
{
	
 int d;
 cout<<"Enter Dimensions of an Diagonal Array:";
 cin>>d;
 // creating Object
 Diagonal dm(d);
 
 int x;
 
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=0;i<d;i++)
 {
 for(int j=0;j<d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 dm.Set(i,j,x);
 }
 }
 
 dm.Display();
 return 0;
}
