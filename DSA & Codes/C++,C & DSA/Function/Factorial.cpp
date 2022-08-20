#include <iostream>
using namespace std;

void fact(int n)
    {
        int t=1;
        for(int i=1;i<=n;i++)
        {
            t=t*i;        
        }
        cout<<t;
    }

int main()
{
    int n;
    cout<<"Enter the Nos :";
    cin>>n;
    fact(n);
    return 0;
}