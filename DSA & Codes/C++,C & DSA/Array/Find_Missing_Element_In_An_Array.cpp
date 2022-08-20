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
	int i,sum=0,n=0,s=0;
	for(i=0;i<arr->length;i++)
	{
		sum=sum+arr->A[i];
 	}
	
    s=((arr->A[arr->length-1]*(arr->A[arr->length-1]+1))/2);
   	n=(s-sum);
   	
	return n;
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
    cout<<"Missing Element is "<<n;
	}
}
