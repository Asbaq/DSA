#include <iostream>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter the No: ";
    cin>>n;

    if(i%4==0 || i%400==0 || i%100==0)
    {
        cout<<"It is a leap year";
    }
    else
    {
        cout<<"it is not a leap year";
    }

    return 0;   
}