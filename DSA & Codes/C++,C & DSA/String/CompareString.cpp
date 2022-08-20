#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="asbaq";
 	char names[25]="asbaq";
 	
 	int i,j;
	
	for(i=0,j=0;name[i]!='\0',names[j]!='\0';i++,j++)
	{
        if(name[i]!=names[j])
        {
        	break;
        	
		}
	}
	
	if(name[i]==names[j])
	{
		printf("String is equal");	
	}
	else if(name[i]<names[j])
	{
		printf("String 1 is SmaNller");
	}
	else
	{
		printf("String 1 is Bigger");
	}
	
	return 0;
}
