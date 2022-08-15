#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

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

void Sorterd(struct Array *arr)
{
	int i,j;
	
	for(i=0;i<arr->length;i++)
	{ 
		for(j=i+1;j<arr->length;j++)
		{
		if(arr->A[j]<arr->A[i])
		{
			swap(&arr->A[i],&arr->A[j]);
		}
		}
	}    
	Display(*arr);
}

void MissingNo(struct Array *arr)
{
    int i,n=0,diff=0,l=arr->A[0],m;
    diff=l-0;
    m=arr->length;
    
	for(i=0;i<m;i++)
	{
		  	
	//cout<<endl<<"m = "<<m<<endl;
    
	if((arr->A[i]-i)!=(diff))
    { 	
    while(diff<arr->A[i]-i)
    {
			
	//cout<<endl<<"i = "<<i<<endl;
    //cout<<endl<<"diff = "<<diff<<endl;
    
	n=i+diff;
    
	//cout<<endl<<"n = "<<n<<endl;
    //cout<<endl<<"arr->length = "<<arr->length<<endl;
	
	arr->A[arr->length]=n;
    arr->length++;
	diff++;
    }
	}
	}
		Sorterd(arr);   
	if(n==0)
	{
	printf("\nThere is No Number is Missing\n");
	}
}

int main()
{
	struct Array arr;
	int i;
	
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

    MissingNo(&arr);
 
}
