#include <iostream>
using namespace std;

int main()
{
    int n,rem,rev;
    
    cout<<"Enter the No: ";
    cin>>n;

        while(n>0)
        {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
        cout<<rev;
    return 0;   
}