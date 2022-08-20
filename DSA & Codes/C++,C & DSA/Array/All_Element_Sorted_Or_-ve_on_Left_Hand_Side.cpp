#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void Display(struct Array *arr)
{
	int i;
	printf("\n Elements of an array :\n");
	for(i=0;i<arr->length;i++)
	{	
		{
			printf("%d \t",arr->A[i]);
		}
	}
}

int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}

void ve(struct Array *arr)
{
	int i=0,j=arr->length-1;
	
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
}

void Sorterd(struct Array *arr)
{
	int i,j;
	
	for(i=0;i<arr->length;i++)
	{ 
		for(j=i+1;j<arr->length;j++)
		{
		if(arr->A[j]<arr->A[i])
		{
			swap(&arr->A[i],&arr->A[j]);
		}
		}
	}    
}

int main()
{
	struct Array arr;
	int i,m;
	
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

    ve(&arr);
    
    Sorterd(&arr);
    
    Display(&arr);
}
