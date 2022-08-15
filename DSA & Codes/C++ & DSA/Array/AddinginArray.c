#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void Append(struct Array arr,int m)
{
	int i;

    arr.A[arr.length]=m;
    arr.length++;

    printf("\n Elements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
		}	
	}

}

int main()
{
	struct Array arr;
	int i,m;
	
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

    printf("\n Enter the Last Element of an array :");
    scanf("%d",&m);

    Append(arr,m);
}
