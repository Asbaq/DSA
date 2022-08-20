
#include <iostream>
using namespace std;

//creating class
class Symmetrical
{
private:
 
 int *A;
 int n;

public:
 
 Symmetrical()
 {
 n=2;
 A = new int[3];
 }
 
 Symmetrical(int n)
 {
 this->n=n;
 //declaring array size
 A = new int[(n*(n+1))/2];
 }
 
 ~Symmetrical()
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

//Setting Elements in an Array Row Major Representation
void Symmetrical::Set(int i,int j,int x)
{
 if(i>=j)
 //cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 A[i*(i-1)/2+j-1]=x;
}

//Setting Elements in an Array in Column Major Representation
void Symmetrical::Set2(int i,int j,int x)
{ 
	
	//cout<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 A[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}

//Returning an Element from Array in Row Major Representation
int Symmetrical::Get(int i,int j)
{
	
 if(i>=j)
 //cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 return (i*(i-1)/2+(j-1));
 return 0;
}

//Returning an Element from Array in Column Major Representation
int Symmetrical::Get2(int i,int j)
{
	
	 //cout<<" "<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 return (n*(j-1)+(j-2)*(j-1)/2+i-j);
 return 0;
}

//Displaying Elements from Array in a form Matrix in Row Major Representation
void Symmetrical::Display()
{ 
	cout<<"Row Major Representation :"<<endl;
	
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i>=j)
 	cout<<A[i*(i-1)/2+j-1]<<" ";
 	else
 	cout<<A[i*(i-1)/2+j-1]<<" ";
 	}
 	cout<<endl;
 	}
}

//Displaying Elements from Array in a form Matrix in Column Major Representation
void Symmetrical::Display2()
{ 
	cout<<"Column Major Representation :"<<endl;
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i>=j)
 	cout<<A[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
 	else
 	cout<<A[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
 	}
 	cout<<endl;
 	}
}

int main()
{
 int d,x;

 cout<<"Enter Dimensions of an Diagonal Array:";
 cin>>d;
  // creating Object
 Symmetrical sm(d);
 

 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 sm.Set(i,j,x);
 }
 }
 
 sm.Display();
 sm.Get(2,2);
}
