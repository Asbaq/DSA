#include <iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter the No:";
    cin>>n;

   for( i=1;i<=n;i++)
    {
         int space= n - i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }  
        int k=i;
        for(int j=1;j<=i;j++)
        {
            cout<<k--;
        }  
        k=2;
        for(int j=k;j<=i;j++)
        {
            cout<<k++;
        }  
        cout<<endl;
    }
}