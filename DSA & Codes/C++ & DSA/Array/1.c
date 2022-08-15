#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void display(struct Array arr)
{
	int i,n;
	printf("\n Elements of an array :\n");
	n=arr.length;
	for(i=0;i<=arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
		}
	
	}
}

int main()
{
	struct Array arr;
	int n,i;
	
	printf("Enter the size of an array :");
	scanf("%d",&arr.size);
	arr.length=0;
	
	arr.A=(int *)malloc(arr.size*sizeof(int));
	
	printf("\nEnter the Length of an array :");
	scanf("%d",&n);
	
	printf("\nEnter the Elements of an array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	
	arr.length=n;
	
	display(arr);
}
