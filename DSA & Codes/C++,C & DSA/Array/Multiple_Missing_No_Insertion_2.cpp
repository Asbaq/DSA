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

int MissingNo(struct Array *arr)
{
	int i,n=0,l=arr->A[i],diff=0,m;
	for(i=0;i<arr->length;i++)
	{
		diff=l-0;
    if((arr->A[i]-i)!=(diff))
    { 	n=i+diff;
    	m=i;
  //  	cout<<endl<<"m = "<<m<<endl;
    	
	for(i=arr->length;i>m;i--)
	{	
	//	cout<<endl<<"i = "<<i<<endl;
		arr->A[i]=arr->A[i-1];
	}
	
//	cout<<endl<<"m = "<<m<<endl;
    
	arr->A[m]=n;
    arr->length++;
    }
	}
	return n;
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

    n=MissingNo(&arr);
    if(n==0)
	{
	printf("\nThere is No Number is Missing\n");
	}
	else
	{
    Display(arr);
	}
}
