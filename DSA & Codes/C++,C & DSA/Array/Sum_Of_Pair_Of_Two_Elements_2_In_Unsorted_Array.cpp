#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array{
	int *A;
	int size;
	int length;
};

int Sum_Of_Pair(struct Array arr)
{
	int i,k=10,j;
	
    for(i=0;i<arr.length-1;i++)
	{	
		for(j=i+1;j<arr.length;j++)
		{
        if(arr.A[i]+arr.A[j]==k)
		{
            cout<<endl<<"Pair is = "<<arr.A[i]<<" + "<<arr.A[j]<<" = "<<k<<endl;
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
	
	Sum_Of_Pair(arr);
}
