#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25];
 	gets(name);	
 	
 	int i,j,length,temp;
 	
 	for(i=0;name[i]!='\0';i++)
	{
	}
	
	length=i;	
	
	for(i=0,j=length-1;i<j;i++,j--)
	{
        temp = name[i];
 		name[i]=name[j];
 		name[j]=temp;
	}
	printf("Reverse string is %s",name);
	return 0;
}
