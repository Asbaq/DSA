#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the No:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
         int space= n - i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }  
        for(int j=1;j<=2*i-1;j++)
        {
            if(j == 1 || j == 2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }    
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
         int space= n - i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }  
        for(int j=1;j<=2*i-1;j++)
        {
            if(j == 1 || j == 2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}