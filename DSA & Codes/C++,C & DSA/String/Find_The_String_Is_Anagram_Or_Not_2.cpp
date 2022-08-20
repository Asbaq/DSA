#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="decimal";
	char names[25]="medical";
 	int i,H=0,x,j;
 	
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
		x=1;
		x=x<<(name[i]-97);
		H=H|x;
	//	printf("%c %d %d\n",name[i],H,x);
	}
//	printf("\n");
		
	for(j=0;names[j]!='\0';j++)
	{	
		names[j]=tolower(names[j]);
		x=1;
		x=x<<(names[j]-97);
		H=H^x;
		
//		printf("%c %d %d\n",names[j],H,x);		
	}
//	printf("\n");
			
	if(names[i]=='\0' && H==0 )
	{
	printf("Its Anagram\n");
	}
	else
	{
	printf("Its Not Anagram\n");
	}
	}
	else
	{
	printf("String is Not Equal\n");
	}
	
	return 0;
}
