#include <iostream>
using namespace std;

int main()
{
    int n,rem;
    
    cout<<"Enter the No: ";
    cin>>n;

        while(n>0)
        {
        rem=n%10;
        cout<<rem<<" ";
        n=n/10;
        rem=0;
        }
    return 0;   
}