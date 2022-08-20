#include <iostream>
using namespace std;

void fab(int n)
    {
        int a=0,b=1,c;
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=n;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
                    
        }
    }

int main()
{
    int n;
    cout<<"Enter the Nos :";
    cin>>n;

    if(n==1)
    {
        cout<<n-1<<" ";
    }
    else if(n==2)
    {
        cout<<n-2<<" "<<n-1<<" ";
    }
    else
    {
        fab(n);
    }
    return 0;
}