#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the No:";
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        int k = n-i+1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}