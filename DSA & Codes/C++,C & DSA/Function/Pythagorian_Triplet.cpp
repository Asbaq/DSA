#include<iostream>
using namespace std;

void Pythagorian(int a,int b,int c)
{
    int x,y,z;
    
    if(a>b && a>c)
    {
        x=a;
        y=b;
        z=c;
    }
    else if(b>a && b>c)
    {
        x=b;
        y=a;
        z=c;
    }
    else if(c>a && c>b)
    {
        x=c;
        z=a;
        y=b;
    }
    else
    {
        cout<<"Invalid";
    }

    x=x*x;
    y=y*y;
    z=z*z;

    if(x==(y+z))
    {
        cout<<"This is a Pythagorian Triplet";
    }
    else
    {
        cout<<"This is not a Pythagorian Triplet";
    }
}

int main()
{
    int a,b,c,r;
    
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    cout<<"Enter C :";
    cin>>c;
    
    Pythagorian(a,b,c);

}