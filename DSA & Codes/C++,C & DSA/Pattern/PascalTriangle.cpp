#include <iostream>
using namespace std;

int main()
{
    int n,coef = 1;

    cout<<"Enter the No:";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
         int space= n - i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }  
        for(int j=0;j<=i;j++)
        {
            if(i == 0 || j == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i-j+1)/j;
            }
            cout<<coef<<" ";
        }    
        cout<<endl;
    }
    cout<<coef * (2-+1)/2;
    return 0;
}