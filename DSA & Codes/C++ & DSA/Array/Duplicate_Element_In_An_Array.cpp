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

void Duplicate(struct Array *arr)
{
int i,n=0,m=0,j=0;
	for(i=0;i<arr->length;i++)
	{
	
    if((arr->A[i])==(arr->A[i+1]))
    { 	
	n=arr->A[i];
	j=i+1;
	cout<<endl<<"Duplicate Element is "<<n<<endl;
	while(arr->A[i]==arr->A[j])
	{
		j++;
	}
	cout<<endl<<arr->A[i]<<" is appearing "<<j-i<<" times "<<endl;
	i=j-1;
	m++;
    }
	}
	cout<<endl<<"No of Duplicate Element is "<<m<<endl;
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
	
	Duplicate(&arr);
}
