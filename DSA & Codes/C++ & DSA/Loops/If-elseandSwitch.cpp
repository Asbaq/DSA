#include <iostream>
using namespace std;

int main()
{
    int Phys,Chem,Math,Bio,Comp,Res;
    cout<<"enter marks of five subjects"<<endl;
    cin>>Phys>>Chem>>Math>>Comp>>Bio;
    Res = Phys+Chem+Math+Bio+Comp;
    int Perc = (Res*100)/500;
    cout<<Perc<<endl;

    if(Perc>=80 && Perc<90)
        {
            Perc = 80;
        }
    else if(Perc>=70 && Perc<80)
        {
            Perc = 70;
        }
    else if(Perc>=60 && Perc<70)
        {
            Perc = 60;
        }
    else if(Perc>=50 && Perc<60)
        {
            Perc = 50;
        }  
    else if(Perc>=40 && Perc<50)
        {
            Perc = 40;
        }
    else if(Perc>=90 && Perc<=100)
        {
            Perc = 90;
        }     
    else
        {
            Perc = 0;
        }

    switch(Perc)
    {
        case 90:
            cout<<"Grade A "<<endl;
            break;
        case 80:
            cout<<"Grade B "<<endl;
            break;
        case 70:
            cout<<"Grade C "<<endl;
            break;
        case 60:
            cout<<"Grade D "<<endl;
            break;
        case 50:
            cout<<"Grade E "<<endl;
            break;
        case 40:
            cout<<"Grade F "<<endl;
            break;
        default:
            cout<<"Fail "<<endl;
    }
    return 0;
}

