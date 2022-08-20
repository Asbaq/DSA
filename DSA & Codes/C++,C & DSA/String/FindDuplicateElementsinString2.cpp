#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="Asbaq is a Good boy";
	int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 	int i,j,d,m=0,c=0;
 	char n;
 		
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=tolower(name[i]);
		arr[name[i]-97]++;	
	}
		
	for(i=0;i<26;i++)
	{
		if(arr[i]>1)
		{
			printf("%c is appearing %d times\n",i+97,arr[i]);
			m++;
		}
	}
	
	printf("No of Duplicate Element is %d\n",m);
	return 0;
}
