#include <iostream>
using namespace std;

int main()
{
    int n,No1=0,No2=1,No3;
    
    cout<<"Enter the No: ";
    cin>>n;

    if(n==1)
    {
        cout<<"Fabonaaci Series : "<<n-1;
    }
    else if(n==2)
    {
        cout<<"Fabonaaci Series :"<<n-2<<" "<<n-1;
    }
    else
    {   
        cout<<"Fabonaaci Series :"<<No1<<" "<<No2<<" ";
        for(int i=1;i<=n;i++)
        {
            No3=No2+No1;
            cout<<No3<<" ";
            No1=No2;
            No2=No3;
        }
    }
    return 0;   

}