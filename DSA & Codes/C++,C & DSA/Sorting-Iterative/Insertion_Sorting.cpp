#include <iostream>

using namespace std;

int main()
{
    int n,current,j,a[5];;

    cout<<"Enter the size of an array : ";
    cin>>n;
    
    cout<<"Enter elemenets of an array : ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    
    for(int i=1; i<n ; i++)
    {
        current = a[i];
        j=i-1;
        while(a[j]>current && j>=0)
    {
        a[j+1] = a[j];
        j--;      
    }
        a[j+1]=current;
    }
    
    cout<<"Elemenets of an array : ";

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t"; 
    }
    cout<<endl;

    return 0;
}