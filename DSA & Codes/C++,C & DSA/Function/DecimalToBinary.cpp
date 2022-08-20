#include<iostream>
using namespace std;

void DecimalToBinary(int n)
{
    int a[32],i=0;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
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
    
    cout<<"Decimal To Binary :";
    DecimalToBinary(n);
    return 0;
}