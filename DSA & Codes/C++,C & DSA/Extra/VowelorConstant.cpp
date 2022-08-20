#include <iostream>
using namespace std;

int main()
{
    char n;
    
    cout<<"Enter the char: ";
    cin>>n;

    bool isuppercase = (n == 'A' || n == 'I' || n == 'O' || n == 'U' || n == 'E');
    bool islowercase = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');
    if(isuppercase||islowercase)
    {
        cout<<n<<" is Vowel";
    }  
    else if(!isalpha(n))
    {
        cout<<"Non-Character Value";
    }
    else
    {
        cout<<n<<" is Consonant";
    }  

    return 0;   

}