
#include <iostream>
using namespace std;

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

void Diagonal::Set(int i,int j,int x)
{
 if(i==j)
 A[i]=x;
}

int Diagonal::Get(int i,int j)
{
 if(i==j)
 return A[i];
 return 0;
}

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

void Symmetrical::Set(int i,int j,int x)
{
	
 if(i>=j)
 cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 A[i*(i-1)/2+j-1]=x;
}

void Symmetrical::Set2(int i,int j,int x)
{ 
	
	//cout<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 A[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}

int Symmetrical::Get(int i,int j)
{
	
 if(i>=j)
 cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 return (i*(i-1)/2+(j-1));
 return 0;
}

int Symmetrical::Get2(int i,int j)
{
	
	 cout<<" "<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 return (n*(j-1)+(j-2)*(j-1)/2+i-j);
 return 0;
}

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

class LowerDiagonal
{
private:
 
 int *A;
 int n;

public:
 
 LowerDiagonal()
 {
 n=2;
 A = new int[3];
 }
 
 LowerDiagonal(int n)
 {
 this->n=n;
 A = new int[(n*(n+1))/2];
 }
 
 ~LowerDiagonal()
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

void LowerDiagonal::Set(int i,int j,int x)
{
	
 if(i>=j)
 cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 A[i*(i-1)/2+j-1]=x;
}

void LowerDiagonal::Set2(int i,int j,int x)
{ 
	
	//cout<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 A[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}

int LowerDiagonal::Get(int i,int j)
{
	
 if(i>=j)
 cout<<" "<<i*(i-1)/2+(j-1)<<endl;
 return (i*(i-1)/2+(j-1));
 return 0;
}

int LowerDiagonal::Get2(int i,int j)
{
	
	 cout<<" "<<n*(j-1)+(j-2)*(j-1)/2+i-j<<endl;
 if(i>=j)
 return (n*(j-1)+(j-2)*(j-1)/2+i-j);
 return 0;
}

void LowerDiagonal::Display()
{ 
	cout<<"Row Major Representation :"<<endl;
	
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i>=j)
 	cout<<A[i*(i-1)/2+j-1]<<" ";
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}

void LowerDiagonal::Display2()
{ 
	cout<<"Column Major Representation :"<<endl;
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=n;j++)
 	{
 	if(i>=j)
 	cout<<A[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
 	else
 	cout<<"0 ";
 	}
 	cout<<endl;
 	}
}
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

void CallDiagonal()
{
	int d,x;
 cout<<"Enter Dimensions of an Diagonal Array:";
 cin>>d;
 
  Diagonal dm(d);
 
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
}

void CallSymetricMatrix()
{
	int d,x;
 cout<<"Enter Dimensions of an Diagonal Array:";
 cin>>d;
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

void CallLowerDiagonalMatrix()
{
	int d,x;
	cout<<"Enter Dimensions of an LowerDiagonal Array:";
 cin>>d;
 LowerDiagonal ldm(d);
 
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 ldm.Set(i,j,x);
 }
 }
 
 ldm.Display();
 ldm.Get(2,2);
}

void CallTriDiagonalMatrix()
{
	int x,d;
 cout<<"Enter Dimensions of an Tri_Diagonal Array:";
 cin>>d;
 Tri_Diagonal tdm(d);
 
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 tdm.Set(i,j,x);
 }
 }
 
 tdm.Display();
 tdm.Get(2,2);
}

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

void Upper_Diagonal::Set(int i,int j,int x)
{
	//cout<<" "<<j*(j-1)/2+i-1<<endl;
 if(j>=i)
 A[j*(j-1)/2+i-1]=x;
}

void Upper_Diagonal::Set2(int i,int j,int x)
{ 
	//cout<<n*(i-1)+(i-2)*(i-1)/2+j-i<<endl;
 if(j>=i)
 A[n*(i-1)+(i-2)*(i-1)/2+j-i]=x;
}

int Upper_Diagonal::Get(int i,int j)
{
	//cout<<" "<<j*(j-1)/2+i-1<<endl;
 if(j>=i)
 return (j*(j-1)/2+i-1);
 return 0;
}

int Upper_Diagonal::Get2(int i,int j)
{
	// cout<<" "<<n*(i-1)+(i-2)*(i-1)/2+j-i<<endl;
 if(j>=i)
 return (n*(i-1)+(i-2)*(i-1)/2+j-i);
 return 0;
}

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

void CallUpperDiagonalMatrix()
{
	 int d;
 cout<<"Enter Dimensions of an Upper_Diagonal Array:";
 cin>>d;
 
 Upper_Diagonal udm(d);
 
 int x;
 cout<<"Enter All Elements";
 cout<<endl;
 
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cout<<"a["<<i<<"]["<<j<<"] :";
 cin>>x;
 udm.Set(i,j,x);
}
}
 udm.Display();
 udm.Get(2,2);
}

int main()
{
 int ch,d,x;
 
do
 {
 printf("\n    Menu\n\n");
 printf("1. Diagonal Matrix\n");
 printf("2. Symmetric Matrix\n");
 printf("3. Lower Diagonal Matrix\n");
 printf("4. Upper Diagonal Matrix\n");
 printf("5. Tri Diagonal Matrix\n");
 printf("6. Toeplitz Matrix\n");
 printf("7. Exit\n");
 
 printf("\nEnter you choice :");
 cin>>ch;
 
 switch(ch)
 {
 case 1:CallDiagonal();
 break;
 
 case 2:CallSymetricMatrix();
 break;
 
 case 3: CallLowerDiagonalMatrix();
 break;
 
 case 4: CallUpperDiagonalMatrix();
 break;
 
 case 5: CallTriDiagonalMatrix();
 break;
 
 case 6: cout<<"Coming Soon"<<endl;
 break;
}
}while(ch<7);
 return 0;
}
