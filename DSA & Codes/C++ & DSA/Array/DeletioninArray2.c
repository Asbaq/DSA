#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void Delete(struct Array arr,int m)
{
	int i,n=-1;
	
    for(i=0;i<arr.length;i++)
	{	
        if(m==arr.A[i])
		{
            n=i;
            break;
		}
	}

if(n>=0)
{   
	for(i=n;i<arr.length;i++)
	{	
		arr.A[i]=arr.A[i+1];
	}
    arr.length--;
    
    printf("\n Elements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
		{
			printf("%d \t",arr.A[i]);
		}
	}
}
else
{
    printf("\n This Element is not in Array\n");
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

    printf("\n Enter the element to delete :");
    scanf("%d",&m);

    Delete(arr,m);
}
