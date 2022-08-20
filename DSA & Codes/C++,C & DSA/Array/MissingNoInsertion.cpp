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

int MissingNo(struct Array *arr)
{
	int i,n=0;
	for(i=0;i<arr->length-1;i++)
	{
    if((arr->A[i]+1)!=(arr->A[i+1]))
    { 	n=i;
	for(i=arr->length;i>arr->A[n];i--)
	{	
		arr->A[i]=arr->A[i-1];
	}
    arr->A[n+1]=(arr->A[n]+1);
    arr->length++;
    }
	}
	return (n+1);
}

int main()
{
	struct Array arr;
	int i,n;
	
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

    n=MissingNo(&arr);
    if(n==0)
	{
	printf("\nThere is No Number is Missing\n");
	}
	else
	{
    Display(arr);
	}
}
