#include <iostream>
using namespace std;

void Alphab(int n)
    {
        //char ch=char(n);

        if((n<=90 && n>=65) || (n<=122 && n>=97))
        {
            cout<<"Its is an alphabhet";
        }
        else
        {
            cout<<"Its is not an alphabet";
        }
    }

int main()
{
    char n;
    cout<<"Enter the Nos :";
    cin>>n;
    Alphab(n);
    return 0;
}