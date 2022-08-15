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

int Min(struct Array arr)
{
	int i,min=arr.A[0],max=arr.A[0];
	
    for(i=0;i<arr.length;i++)
	{	
        if(arr.A[i]<min)
		{        
            min=arr.A[i];
		}
		else if(arr.A[i]>max)
		{
			max=arr.A[i];
		}
		
		
	}
	cout<<endl<<"Min No is = "<<min<<endl;
	cout<<endl<<"Max No is = "<<max<<endl;
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
	
	Min(arr);
}
