#include<stdio.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main()
{
	char name[25]="Verbose";
	char names[25]="Observe";
	int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 	int i,j,m=0;
 	
 	for(i=0;name[i]!='\0';i++)
	{
	}
	
	for(j=0;names[j]!='\0';j++)
	{
	}
	
	if(i==j)
	{
	
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=tolower(name[i]);
		arr[name[i]-97]++;	
	//	cout<<char(name[i])<<"\t"<<arr[name[i]-97]<<endl;
	}
	
	//cout<<endl;
		
	for(j=0;names[j]!=0;j++)
	{
		names[j]=tolower(names[j]);
		arr[names[j]-97]--;
		
	//	cout<<char(names[j])<<"\t"<<arr[names[j]-97]<<endl;
		if(arr[names[i]-97]<0)
		{
			printf("Its Not Anagram\n");
			break;
		}
	}
	if(names[i]=='\0')
	{
	printf("Its Anagram\n");
	}
	}
	else
	{
	printf("String is Not Equal\n");
	}
	
	return 0;
}
