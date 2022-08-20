#include <iostream>
using namespace std;

int fact(int n)
    {
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            fact*=i;
        }
        return fact;     
    }

int main()
{
    int n;
    cout<<"Enter the n :";
    cin>>n;
     
    for(int i=0;i<n;i++)
    {
        
         int space= n - i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        } 
    
        for(int j=0;j<=i;j++)
       {
           cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
       }
       cout<<endl;
    }
    return 0;
}