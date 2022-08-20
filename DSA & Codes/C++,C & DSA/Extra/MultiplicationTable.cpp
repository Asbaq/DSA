#include <iostream>
using namespace std;

int main()
{
    char n;
    
    cout<<"Enter the No: ";
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;   
}