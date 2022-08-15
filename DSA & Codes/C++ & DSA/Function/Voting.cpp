#include <iostream>
using namespace std;

void Vote(int a)
    {
        
        if(a>=18)
        {
            cout<<"He is Eligible to give vote";
        }
        else
        {
            cout<<"He is not Eligible to give vote";            
        }
    }

int main()
{
    int a;
    cout<<"Enter the Nos :";
    cin>>a;
    Vote(a);
    return 0;
}