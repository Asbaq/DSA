#include<stdio.h>
#include<stdlib.h>

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

void Insert(struct Array arr,int m,int index)
{
	int i;

    if(arr.length>=index && index>=0)
    {
	for(i=arr.length;i>index;i--)
	{	
		arr.A[i]=arr.A[i-1];
	}
    arr.A[index]=m;
    arr.length++;
	
	Display(arr);

    }
    else
    {
        printf("\nYour Index is Out of Range\n");
    }

}

int main()
{
	struct Array arr;
	int i,m,index;
	
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

    printf("\nInsert the Element :");
    scanf("%d",&m);

    printf("\nTell the Index where to Insert :");
    scanf("%d",&index);

    Insert(arr,m,index);
}
