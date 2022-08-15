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

int Duplicate(struct Array arr)
{
	int i,count,j;
	
    for(i=0;i<arr.length-1;i++)
	{	
		count=1;
		if(arr.A[i]!=-1)
		{
		for(j=i+1;j<arr.length;j++)
		{
        if(arr.A[i]==arr.A[j])
		{
            count++;
            arr.A[j]=-1;
		}
		}
		if(count>1)
		{
		cout<<endl<<arr.A[i]<<" is appearing "<<count<<" times "<<endl;
		}
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
	
	Duplicate(arr);
}
