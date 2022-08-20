
#include <iostream>
using namespace std;

int main()
{
    int org,n,rem,temp;
    
    cout<<"Enter the No: ";
    cin>>n;
    
    org=n;

    while(n>0)
    {
        rem=n%10;
        rem=rem*rem*rem;
        n=n/10;
        temp += rem;
    }

    if(org==temp)
    {
        cout<<endl<<"It is Armstrong";
    }
    else
    {
        cout<<"It is not Armstrong";
    }
    return 0;   
}