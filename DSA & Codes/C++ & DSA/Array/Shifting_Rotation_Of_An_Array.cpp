#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void LeftShift(struct Array *arr)
{
	int i;
	
	for(i=0;i<arr->length;i++)
	{
		arr->A[i-1]=arr->A[i];
	}
	arr->A[arr->length-1]=0;
	
	printf("\n Elements of an array from Left Shift :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}	
	}
	
}

void RightShift(struct Array *arr)
{
	int i;
	
	for(i=arr->length-1;i>=0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0]=0;
	
	printf("\n Elements of an array from Right Shift :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}	
	}
	
}

void LeftRotate(struct Array *arr)
{
	int i;
	
	int temp=arr->A[0];
		
	for(i=0;i<arr->length;i++)
	{
		arr->A[i-1]=arr->A[i];
	}
	arr->A[arr->length-1]=temp;
	
	printf("\n Elements of an array from Left Rotate :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}	
	}
	
}


void RightRotate(struct Array *arr)
{
	int i;
	
	int temp=arr->A[arr->length-1];
	
	for(i=arr->length-1;i>=0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0]=temp;
	
	printf("\n Elements of an array from Rigth Rotate :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}	
	}
	
}

int main()
{
	struct Array arr;
	int i,index;
	
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

	LeftShift(&arr);
	RightShift(&arr);
	LeftRotate(&arr);
	RightRotate(&arr);
}
