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
    int n,r,result;
    cout<<"Enter the n and r :";
    cin>>n>>r;
    cout<<"fact(n) = "<<fact(n)<<endl<<"fact(r) = "<<fact(r)<<endl<<"fact(n-r) = "<<fact(n-r)<<endl<<"(fact(r)*fact(n-r)) = "<<(fact(r)*fact(n-r))<<endl;
    result=fact(n)/(fact(r)*fact(n-r));
    cout<<"Result = "<<result<<endl;
    return 0;
}