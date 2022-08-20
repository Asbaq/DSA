#include<stdio.h>
#include<stdlib.h>

struct Array{
	int A[10];
	int size;
	int length;
};

bool isSorterd(struct Array arr)
{
	int i;
	
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		{
			return false;
		}
	}
	return true;
	
}

void Insert(struct Array arr,int max)
{
	int i;
	
	if(isSorterd(arr))
	{
		
	for(i=arr.length-1;i>=0;i--)
	{	
		if(max<=arr.A[i])
		{
			arr.A[i+1]=arr.A[i];
		}
		else
		{
			arr.A[i+1]=max;
			break;
		}
	}
    arr.length++;
    
    printf("\nElements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
		}
	}
	}
	else
	{
		printf("\nArray is not Sorted :\n");
	}
}

int main()
{
	int ch,x,index;
 struct Array arr1={{35,30,40,20,10},10,5}; 
 struct Array arr2={{2,3,16,18,28},10,5}; 
//	struct Array arr;
//	int i,m;
//	
//	printf("Enter the size of an array :");
//	scanf("%d",&arr.size);
//	arr.length=0;
//	
//	arr.A=(int *)malloc(arr.size*sizeof(int));
//	
//	printf("\nEnter the Length of an array :");
//	scanf("%d",&arr.length);
//	
//	printf("\nEnter the Elements of an array :");
//	for(i=0;i<arr.length;i++)
//	{
//		scanf("%d",&arr.A[i]);
//	}
//
    printf("\nInsert the Element :");
   scanf("%d",&x);

    Insert(arr1,x);
}
