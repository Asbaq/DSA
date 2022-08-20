#include <iostream>
using namespace std;

void NO(int n)
    {
        if(n%2==0)
        {
            cout<<"No is Even";
        }
        else
        {
            cout<<"No is Odd";
        }
    }

int main()
{
    int n;
    cout<<"Enter the Nos :";
    cin>>n;
    NO(n);
    return 0;
}