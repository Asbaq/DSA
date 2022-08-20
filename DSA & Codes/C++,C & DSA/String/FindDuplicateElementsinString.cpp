#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25]="Asbaq is a good boy";
 	int i,j,d,m=0,c=0;
 	char n;
	
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=tolower(name[i]);
		d=1;
	if(name[i]!=-1)
	{
	
		for(j=i+1;name[j]!='\0';j++)
		{
			name[j]=tolower(name[j]);
        if(name[i]==name[j] && name[i]!=' ')
        {
           d++;
           name[j]=-1;
		}
		}
		
		if(d>1)
		{
			printf("%c is appearing %d times\n",name[i],d);
			m++;
			n=name[j];
		}

	}	
	}
	printf("No of Duplicate Element is %d\n",m);
	return 0;
}
