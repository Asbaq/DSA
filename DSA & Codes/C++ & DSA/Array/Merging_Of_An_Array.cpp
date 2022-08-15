#include<stdio.h>
#include<stdlib.h>

struct Array
{
 int A[10];
 int size;
 int length;
};

void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
}
 
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
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
}
 
struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 arr3->A[k++]=arr1->A[i++];
 else
 arr3->A[k++]=arr2->A[j++];
 }
 for(;i<arr1->length;i++)
 arr3->A[k++]=arr1->A[i];
 for(;j<arr2->length;j++)
 arr3->A[k++]=arr2->A[j];
 arr3->length=arr1->length+arr2->length;
 arr3->size=10;

 Sorterd(arr3);
 
 return arr3; 
}

int main()
{
 struct Array arr1={{9,2,28,21,35},10,5}; 
 struct Array arr2={{200,3,160,18,280},10,5}; 
 struct Array *arr3; 
 arr3=Merge(&arr1,&arr2); 
 Display(*arr3);
 
return 0; 
}
