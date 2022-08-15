#include<iostream>
using namespace std;

void DecimalToOctal(int n)
{
    int a[32],i=0;
    while(n>0)
    {
        a[i]=n%8;
        n=n/8;
        i++;
    }
   
    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
}

int main()
{
    int n;

    cout<<"Enter The No: ";
    cin>>n;
    
    cout<<"Decimal To Octal :";
    DecimalToOctal(n);
    return 0;
}