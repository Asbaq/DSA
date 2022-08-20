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

    int counter = 1;
    while(counter < n)
    {
    for(int i=0; i<n-counter ; i++)
    {
        if(a[i+1]<a[i])
        {
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1] = temp;
        }   
    }
    counter++;       
    }
    
    cout<<"Elemenets of an array : ";

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t"; 
    }
    cout<<endl;
 
    return 0;
}