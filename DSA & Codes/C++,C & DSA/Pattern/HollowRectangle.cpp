#include <iostream>
using namespace std;

int main()
{
    int rows,column;

    cout<<"Enter the Rows:";
    cin>>rows;

    cout<<"Enter the Column:";
    cin>>column;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=column;j++)
        {
            if(i==rows || i==1 || j==1 || j==column)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}