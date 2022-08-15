# include <iostream>
using namespace std;
int main() 
{ 
 int s1,s2,s3;
 float per;

 cout<<"enter 3 No:"<<endl;
 cin>>s1>>s2>>s3;


 switch (s1>s2 && s1>s3)
 {
		 case 1:
		cout<<s1<<" s1 is greater "<<endl;
		  	case 0:
		  	switch (s2>s1 && s2>s3)
		  	{
		  	case 1: 
		  	cout<<s2<<" s2 is greater "<<endl;
				case 0:
		  		switch (s3>s1 && s3>s1)
		  		{
		  		case 1:
		  		cout<<s3<<" s3 is greater "<<endl;			  
				break;
		  		}
			break;		
		  	}
	break;
} 		 
}