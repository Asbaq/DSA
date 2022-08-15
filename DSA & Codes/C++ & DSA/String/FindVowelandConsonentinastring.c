#include<stdio.h>
#include<ctype.h>

int main()
{
	char name[25];
 	gets(name);	
    
	int i,vowel=0,consonent=0,words=1;

	for(i=0;name[i]!='\0';i++)
	{
        name[i]=tolower(name[i]);
        if(name[i]== 'a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            vowel++;
        }
        else if((name[i]>=65  && name[i]<=90) || (name[i]>=97 && name[i]<=122))
        {
            consonent++;
        }

        if(name[i] == ' ' && name[i-1] != ' ')
        {
            words++;
        }
	}

	printf("Number of Vowel, Number of consonent and Number of words in a string are %d %d %d\n",vowel,consonent,words);
	
	return 0;
}
