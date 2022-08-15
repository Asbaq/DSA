#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array{
	int *A;
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("Length : %d",arr.length);
	int i;
	printf("\nElements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
		}
	}
}

void MissingNo(struct Array *arr)
{
    int i,n=0,diff=0,l=arr->A[0];
    diff=l-0;
	for(i=0;i<arr->length;i++)
	{
    if((arr->A[i]-i)!=(diff))
    { 	
    while(diff<arr->A[i]-i)
    {
    n=i+diff;
	diff++;
	cout<<endl<<"Missing No is = "<<n<<endl;
    }
	}
	}
	if(n==0)
	{
	printf("\nThere is No Number is Missing\n");
	}
}

int main()
{
	struct Array arr;
	int i;
	
	printf("Enter the size of an array :");
	scanf("%d",&arr.size);
	arr.length=0;
	
	arr.A=(int *)malloc(arr.size*sizeof(int));
	
	printf("\nEnter the Length of an array :");
	scanf("%d",&arr.length);
	
	printf("\nEnter the Elements of an array :");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}

    MissingNo(&arr);
    
}
