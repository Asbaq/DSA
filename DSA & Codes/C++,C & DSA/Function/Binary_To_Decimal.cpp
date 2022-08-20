#include<iostream>
using namespace std;

int power(int a,int n)
{
    int r=1;
    for(int i=1;i<=n;i++)
    {
        r*=a;
    }
    return r;
}

int Binary(int n)
{   int r=0,m,i=0,c=0;

    while(n>0)
    {
        m=n%10;
        n=n/10;
        r=m*(power(2,i));
        c+=r;
        i++;
    }
    return c;
}

int main()
{
    int n,r;

    cout<<"Enter The No: ";
    cin>>n;

    r = Binary(n);
    
    cout<<"Binary To decimal :"<<r;
}