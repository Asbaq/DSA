#include<iostream>
using namespace std;

void DecimalToHexa(int n)
{
    char a[100];
    int i=0,temp;
    while(n>0)
    {
        temp=n%16;

        if(temp<10)
        {
            a[i]= temp + 48;
            i++;
        }
        else
        {
            a[i]= temp + 55;
            i++;
        }
        n=n/16;
    }
   
    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
}

int main()
{
    int n;

    cout<<"Enter The No: ";
    cin>>n;
    
    cout<<"Decimal To Hexadecimal :";
    DecimalToHexa(n);
    return 0;
}