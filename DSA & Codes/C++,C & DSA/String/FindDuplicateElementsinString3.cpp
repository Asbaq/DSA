#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="Asbaq is a Good boy";
	char arr[10]="0";
 	int i,m=0,H=0,x,j,count;
 	char n;
 	
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=tolower(name[i]);
		x=1;
		x=x<<(name[i]-97);
		
	for(j=0;arr[j]!='\0';j++)
	{	
		if(arr[j]==name[i])
		{
			printf("%c\n",arr[j]);
			count++;
		}
	}
	
		if((x & H)>0 && count<1)
		{
			printf("%c is Duplicate\n",name[i]);
			arr[j]=name[i];
			m++;
		}	
		else
		{
			H=H|x;
		}
		count=0;
	}
	
	printf("No of Duplicate Element is %d\n",m);
	return 0;
}
