#include <iostream>
using namespace std;

int main()
{
    int rows,column;

    cout<<"Enter the Rows:";
    cin>>rows;

    cout<<"Enter the Column:";
    cin>>column;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}