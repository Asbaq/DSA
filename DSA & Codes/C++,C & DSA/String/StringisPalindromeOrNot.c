#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="asbaq";
 	char names[25]="qabsa";
 	
 	int i,j,length,lengths,temp,count;
 	
 	for(i=0;name[i]!='\0';i++)
	{
	}
	
	for(j=0;names[j]!='\0';j++)
	{
	}
	
	if(i<j)
	{
		length=j;
	}
	else
	{
		length=i;
	}
	
	for(i=0,j=length-1;i<length-1,j>0;i++,j--)
	{
        if(name[i]!=names[j])
        {
        	count++;
		}
	}
	
	if(count)
	{
		printf("String is not a Palindrome");	
	}
	else
	{
		printf("String is a Palindrome");
	}
	
	return 0;
}
