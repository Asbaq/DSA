#include <iostream>
using namespace std;

int main()
{
    int n,j;

    cout<<"Enter the No:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
         int space= n - i;
        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }  

        for(j=1;j<=2*i-1;j++)
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
            
        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }    
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
         int space= n - i;
        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }  

        for(j=1;j<=2*i-1;j++)
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

        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}