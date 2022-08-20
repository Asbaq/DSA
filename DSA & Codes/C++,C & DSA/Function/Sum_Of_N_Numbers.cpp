#include<iostream>
using namespace std;

int func(int n)
{
    int r=0;
    for(int i=1;i<=n;i++)
    {
        r = r + i;
    }
    return r;
}

int main()
{
    int n,r;
    
    cout<<"Enter The No: ";
    cin>>n;
    
    r = func(n);

    cout<<"Sum of N Natural No is :"<<r;

}