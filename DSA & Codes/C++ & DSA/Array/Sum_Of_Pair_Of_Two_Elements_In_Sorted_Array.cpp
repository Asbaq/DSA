#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array{
	int *A;
	int size;
	int length;
};

void Pair(struct Array *arr)
{
int i,k=10,j;

	for(i=0,j=arr->length-1;i<j;)
	{
    if(arr->A[i]+arr->A[j]==k)
    { 	
	cout<<endl<<"Pair is = "<<arr->A[i]<<" + "<<arr->A[j]<<" = "<<k<<endl;
	j--;
	i++;
	}
	
	if(arr->A[i]+arr->A[j]<k)
    { 	
	i++;
	}
	else
	{
	j--;	
	}
}
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
	
	Pair(&arr);
}
