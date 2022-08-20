#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}

void Reverse(struct Array *arr)
{
	int i,j;
	
	int *B = (int *)malloc(sizeof(int)*arr->length);
	
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		B[j]=arr->A[i];
	}
	
	for(i=0;i<arr->length;i++)
	{
		arr->A[i]=B[i];
	}
	
	printf("\n Elements of an array from Reverse :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}	
	}
	
}

void Reverse2(struct Array *arr)
{
	int i,j;
	
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
		
	}
	
	printf("\n Elements of an array from Reverse2 :\n");
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

	Reverse(&arr);
	
	Reverse2(&arr);

}
