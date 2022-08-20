#include<stdio.h>

int main()
{
	char name[10];
	scanf("%s",&name);	
	int i,n;

	for(i=0;name[i]!='\0';i++)
	{
        if(name[i]>=65 && name[i]<=90)
        {
            name[i]+=32;
        }
        else if(name[i]>=97 && name[i]<=122)
        {
            name[i]-=32;
        }
	}

	printf("%s",name);
	
	return 0;
}