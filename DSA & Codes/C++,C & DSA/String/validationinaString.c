#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25];
 	gets(name);	
    
	int i;

	for(i=0;name[i]!='\0';i++)
	{
        name[i]=tolower(name[i]);
        
        if(!(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57) && !(name[i] == ' ' && name[i-1] != ' '))
        {
            printf("String is not valid");
            break;
        }
	}
	printf("\nString is valid");
	
	return 0;
}
