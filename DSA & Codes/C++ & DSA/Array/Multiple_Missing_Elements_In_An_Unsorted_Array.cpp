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

int Missing(struct Array arr,struct Array arr2)
{
	int i,n=0;
	
    for(i=0;i<arr.length;i++)
	{	
		arr2.A[arr.A[i]]++;	
	}
	cout<<"Mising Elements are ";
		for(i=1;i<12;i++)
		{
        		if(arr2.A[i]==0)
		{
		cout<<i<<"\t";
		n++;
		}
		}
	if(n==0)
	{
	printf(" None \n");
	}
}



int main()
{	 
	struct Array arr={{3,7,4,9,12,6,1,11,2,10},10,10};
	struct Array arr2={{0,0,0,0,0,0,0,0,0,0,0,0},12,12};
	
	Missing(arr,arr2);
}
