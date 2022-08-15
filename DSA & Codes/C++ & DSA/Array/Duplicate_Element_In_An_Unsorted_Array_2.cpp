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

int Duplicate(struct Array arr,struct Array arr2)
{
	int i;
	
    for(i=0;i<arr.length;i++)
	{	
		arr2.A[arr.A[i]]++;	
	}
		for(i=0;i<20;i++)
		{
        		if(arr2.A[i]>1)
		{
		cout<<endl<<i<<" is appearing "<<arr2.A[i]<<" times "<<endl;
		}
		}
}

int main()
{	 
	struct Array arr={{8,3,6,4,6,5,6,8,2,7},10,10};
	struct Array arr2={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},20,20};
	
	Duplicate(arr,arr2);
}
