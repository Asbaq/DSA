#include <iostream>
using namespace std;

//creating class
class Upper_Diagonal
{
private:
 
 int *A;
 int n;

public:
 
 Upper_Diagonal()
 {
 n=2;
 A = new int[3];
 }
 
 Upper_Diagonal(int n)
 {
 this->n=n;
  //declaring array size
 A = new int[(n*(n+1))/2];
 }
 
 ~Upper_Diagonal()
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

//Setting Elements in an Array column Major Representation
void Upper_Diagonal::Set(int i,int j,int x)
{
	//cout<<" "<<j*(j-1)/2+i-1<<endl;
 if(j>=i)
 A[j*(j-1)/2+i-1]=x;
}

//Setting Elements in an Array in Row Major Representation
void Upper_Diagonal::Set2(int i,int j,int x)
{ 
	//cout<<n*(i-1)+(i-2)*(i-1)/2+j-i<<endl;
 if(j>=i)
 A[n*(i-1)+(i-2)*(i-1)/2+j-i]=x;
}

//Returning an Element from Array in Column Major Representation
int Upper_Diagonal::Get(int i,int j)
{
	//cout<<" "<<j*(j-1)/2+i-1<<endl;
 if(j>=i)
 return (j*(j-1)/2+i-1);
 return 0;
}

//Returning an Element from Array in Row Major Representation
int Upper_Diagonal::Get2(int i,int j)
{
	// cout<<" "<<n*(i-1)+(i-2)*(i-1)/2+j-i<<endl;
 if(j>=i)
 return (n*(i-1)+(i-2)*(i-1)/2+j-i);
 return 0;
}

//Displaying Elements from Array in a form Matrix in Column Major Representation
void Upper_Diagonal::Display()
{ 
	cout<<"Column Major Representation :"<<endl;
	
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(j>=i)
 	cout<<A[j*(j-1)/2+i-1]<<" ";
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}

//Displaying Elements from Array in a form Matrix in Row Major Representation
void Upper_Diagonal::Display2()
{ 
	cout<<"Row Major Representation :"<<endl;
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(j>=i)
 	cout<<A[n*(i-1)-(i-2)*(i-1)/2+j-i]<<" ";
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}


int main()
{
	
 int d;
 cout<<"Enter Dimensions of an Upper_Diagonal Array:";
 cin>>d;

  // creating Object
 Upper_Diagonal dm(d);
 
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
 dm.Get(2,2);
 return 0;
}
