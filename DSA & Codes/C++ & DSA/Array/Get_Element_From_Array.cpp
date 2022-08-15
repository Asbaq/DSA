#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

int Get(struct Array arr,int index)
{
	int i;
	
if(index<=arr.length && index>=0)
{
   return arr.A[index];
}
else
{
    printf("\nThis Index is not in Array\n");
}
}


int Min(struct Array arr)
{
	int i,min=0;
	
    for(i=0;i<arr.length;i++)
	{	
        if(arr.A[i]<min)
		{        
            min=arr.A[i];
            
		}
	}
	return min;
}

int Max(struct Array arr)
{
	int i,max=0;
	
    for(i=0;i<arr.length;i++)
	{	
        if(arr.A[i]>max)
		{        
            max=arr.A[i];
            
		}
	}
	return max;
}

int Sum(struct Array arr)
{
	int i,sum=0;
	
    for(i=0;i<arr.length;i++)
	{	        
        sum+=arr.A[i];    
	}	
	return sum;
}

int RSum(struct Array arr,int n)
{
	if(n<0)
	{
		return 0;	
	}	
	else
	{
		return RSum(arr,n-1)+arr.A[n];
	}
}

int Avg(struct Array arr)
{
	int i;
	
	return (float)Sum(arr)/arr.length;
}

int Set(struct Array arr,int index,int x)
{
	int i;
	
if(index<=arr.length && index>=0)
{
   arr.A[index]=x;
   
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
    printf("\nThis Index is not in Array\n");
}
}

int main()
{
	struct Array arr;
	int i,index;
	
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

    printf("\nEnter the index to Search :");
    scanf("%d",&index);
    
    Set(arr,index,-1);
	
	printf("\nElement is : %d",Get(arr,index));
	
	printf("\nMax Element is : %d",Max(arr));

	printf("\nMin Element is : %d",Min(arr));	
	
	printf("\nSum of Elements is : %d",Sum(arr));
	
	printf("\nRSum of Elements is : %d",RSum(arr,arr.length-1));
	
	printf("\nAvg of Elements is : %d",Avg(arr));

}
