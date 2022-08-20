#include <iostream>

using namespace std;

int main()
{
    int n,max,min,a[5];;

    cout<<"Enter the size of an array : ";
    cin>>n;
    
    cout<<"Enter elemenets of an array : ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1 ; i++)
    { 
        for(int j=i+1; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }     
    }
    
    cout<<"Elemenets of an array : ";

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t"; 
    }
    cout<<endl;
 
    return 0;
}