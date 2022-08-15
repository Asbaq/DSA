#include <iostream>
using namespace std;

void Largest(int a,int b,int c)
    {
        
        if(a>b)
        {
            if(a>c)
            {
            cout<<"A";
            }
            else
            {
            cout<<"C";
            }
        }
        else if(b>a)
        {
            if(b>c)
            {
            cout<<"B";
            }
            else
            {
            cout<<"C";
            }
        }
        else
        {
            cout<<"C";            
        }
    }

int main()
{
    int a,b,c;
    cout<<"Enter the Nos :";
    cin>>a>>b>>c;
    Largest(a,b,c);
    return 0;
}