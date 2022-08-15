#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the No: ";
    cin>>n;

    if(n>1)
    {
    for(int i=2;i<n;i++)
    {
    if(n%i == 0)
    {
        cout<<"Not Prime"<<endl;
        break;
    }
    else
    {
        cout<<"Prime"<<endl;
        break;
    }
    }
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    return 0;   
}