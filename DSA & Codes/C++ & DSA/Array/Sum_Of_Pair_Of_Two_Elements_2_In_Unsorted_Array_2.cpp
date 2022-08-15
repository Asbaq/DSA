#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array{
	int A[20];
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

int Sum_Of_Pair(struct Array arr,struct Array arr2)
{
	int i,k=10;
	
    for(i=0;i<arr.length;i++)
	{
		if(arr2.A[k-arr.A[i]]!=0 && k-arr.A[i]>=0)
		{
			cout<<endl<<"Pair is = "<<arr.A[i]<<" + "<<k-arr.A[i]<<" = "<<k<<endl;				
		}	
		arr2.A[arr.A[i]]++;
	}
}
int main()
{	 
	struct Array arr={{6,3,8,10,16,7,5,2,9,14},10,10};
	struct Array arr2={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},20,20};
	
	Sum_Of_Pair(arr,arr2);
}
