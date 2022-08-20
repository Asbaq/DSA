#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array{
	int A[20];
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

void Display(struct Array arr)
{
	printf("\nLength : %d ",arr.length);
	int i;
	printf("\nElements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
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
	Display(*arr);
}

int Duplicate(struct Array *arr,struct Array *arr2)
{
	int i,n=0;
	
    for(i=0;i<arr->length;i++)
	{	
		arr2->A[arr->A[i]]++;	
	}
	cout<<"Mising Elements are ";
		for(i=1;i<12;i++)
		{
        		if(arr2->A[i]==0)
		{
			cout<<i<<"\t";
			arr->A[arr->length]=i;
			arr->length++;
			n++;
		}
		}
		
		
		if(n==0)
		{
			printf("NULL \n");
		}
		else
		{
			Sorterd(arr);
		}
}

int main()
{	 
	struct Array arr={{3,7,4,9,12,6,1,11,2,10},10,10};
	struct Array arr2={{0,0,0,0,0,0,0,0,0,0,0,0},12,12};
	
	Duplicate(&arr,&arr2);
}
