#include <iostream>
using namespace std;

void Swapping(int a,int b)
    {
        int temp;
        cout<<"Before Swapping a and b :"<<a<<" "<<b<<endl; 
        temp=a;
        a=b;
        b=temp;
        cout<<"After Swapping a and b :"<<a<<" "<<b<<endl;
    }

int main()
{
    int a,b;
    cout<<"Enter the Nos :";
    cin>>a>>b;
    Swapping(a,b);
    return 0;
}