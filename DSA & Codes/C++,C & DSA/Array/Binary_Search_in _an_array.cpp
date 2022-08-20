#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int Search(struct Array arr,int m)
{
	int i,mid,l=0,h=arr.length-1;
		
		while(l<=h)
	{
		mid=(l+h)/2;
        if(m==arr.A[mid])
		{        
			swap(&arr.A[mid],&arr.A[0]);
			return mid;
		}
		else if(m>arr.A[mid])
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
		return -1;
	}
}

int RSearch(struct Array arr,int key,int l,int h)
{
 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==arr.A[mid])
 {
 return mid;
 }
 else if(key<arr.A[mid])
 {
 return RSearch(arr,key,l,mid-1);
 }
 else
 {
 return RSearch(arr,key,mid+1,h);
 }
}
return -1;
}

int main()
{
	struct Array arr;
	int i,m,index,re=-1;
	
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

    printf("\nEnter the element to Search :");
    scanf("%d",&m);

    re=RSearch(arr,m,0,arr.length-1);
 
if(re>=0){
    printf("\nYour elemnet index is %d \n",re);
    
    printf("\n Elements of an array :\n");
	for(i=0;i<arr.length;i++)
	{	
	
			printf("%d \t",arr.A[i]);
	}	
}
else
{
    printf("\nThis Element is not in Array\n");
}
}

