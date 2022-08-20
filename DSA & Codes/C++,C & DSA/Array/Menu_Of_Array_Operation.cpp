#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Array
{
 int A[10];
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
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 {
 printf("%d ",arr.A[i]);
 }
 cout<<endl;
} 

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


struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
if(isSorterd(*arr1) && isSorterd(*arr2))
{
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
 
 return arr3;
 }
else
	{
		printf("\nArray is not Sorted :\n");
	}
	return 0;
}

struct Array *Union(struct Array *arr1,struct Array *arr2)
{
 int i=0,j=0,k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 {
 arr3->A[k++]=arr1->A[i++];
 }
 else if(arr1->A[i]>arr2->A[j])
 {
  	arr3->A[k++]=arr2->A[j++];
 }
 else
 {
 arr3->A[k++]=arr1->A[i++];
 j++;
 }
 }
 for(;i<arr1->length;i++)
 arr3->A[k++]=arr1->A[i];
 for(;j<arr2->length;j++)
 arr3->A[k++]=arr2->A[j];
 arr3->length=k;
 arr3->size=arr1->size+arr2->size;
 return arr3;
}

struct Array *Intersection(struct Array *arr1,struct Array *arr2)
{
 int i=0,j=0,k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 {
 	i++;
 }
 else if(arr1->A[i]>arr2->A[j])
 {
  	j++;
 }
 else
 {
 arr3->A[k++]=arr1->A[i++];
 j++;
 }
 }
 
 arr3->length=k;
 arr3->size=arr1->size+arr2->size;
 return arr3;
}

struct Array *Diffrence(struct Array *arr1,struct Array *arr2)
{
 int i=0,j=0,k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 {
 	j++;
 }
 else if(arr1->A[i]>arr2->A[j])
 {
  	arr3->A[k++]=arr1->A[i++];
 }
 else
 {
 i++;
 j++;
 }
 }
 
 arr3->length=k;
 arr3->size=arr1->size+arr2->size;
 return arr3;
}

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
void Delete(struct Array arr,int index)
{
    int i,x;
	
	x=arr.A[index];
    if(arr.length>=index && index>=0)
    {
	for(i=index;i<arr.length;i++)
	{	
		arr.A[i]=arr.A[i+1];
	}
    arr.length--;
    
    printf("\nDeleted Element is %d\n",x);

   Display(arr);

    }
    else
    {
        printf("\nYour Index is Out of Range\n");
    }

}

void Delete2(struct Array arr,int m)
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
int BinarySearch(struct Array arr,int m)
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

int RBinarySearch(struct Array arr,int key,int l,int h)
{
 int mid=0;
 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==arr.A[mid])
 {
 return mid;
 }
 else if(key<arr.A[mid])
 {
 return RBinarySearch(arr,key,l,mid-1);
 }
 else
 {
 return RBinarySearch(arr,key,mid+1,h);
 }
}
return -1;
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

void ve(struct Array *arr)
{
	int i=0,j=arr->length-1;
	
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
	Display(*arr);
}

void Insert(struct Array arr,int index,int m)
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


void SortedInsert(struct Array arr,int max)
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
    
    Display(arr);
	}
	else
	{
		printf("\nArray is not Sorted :\n");
	}
}

void Reverse(struct Array *arr)
{
	int i,j;
	
	int *B = (int *)malloc(sizeof(int)*arr->length);
	
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		B[j]=arr->A[i];
	}
	
	for(i=0;i<arr->length;i++)
	{
		arr->A[i]=B[i];
	}
	
	Display(*arr);
	
}

void Reverse2(struct Array *arr)
{
	int i,j;
	
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
		
	}
	
	Display(*arr);
	
}

void LeftShift(struct Array *arr)
{
	int i;
	
	for(i=0;i<arr->length;i++)
	{
		arr->A[i-1]=arr->A[i];
	}
	arr->A[arr->length-1]=0;
	
	Display(*arr);
	
}
void RightShift(struct Array *arr)
{
	int i;
	
	for(i=arr->length-1;i>=0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0]=0;
	
	Display(*arr);
}
void LeftRotate(struct Array *arr)
{
	int i;
	
	int temp=arr->A[0];
		
	for(i=0;i<arr->length;i++)
	{
		arr->A[i-1]=arr->A[i];
	}
	arr->A[arr->length-1]=temp;
	
	Display(*arr);
}
void RightRotate(struct Array *arr)
{
	int i;
	
	int temp=arr->A[arr->length-1];
	
	for(i=arr->length-1;i>=0;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0]=temp;
	
	Display(*arr);	
}
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
	int i,min=arr.A[0];
	
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
   
   Display(arr);
}
else
{
    printf("\nThis Index is not in Array\n");
}
}

void LinearSearch(struct Array arr,int m)
{
	int i,n=-1;
	
    for(i=0;i<arr.length;i++)
	{	
        if(m==arr.A[i])
		{        
            n=i;
            swap(&arr.A[i],&arr.A[0]);
            break;
		}
	}
	

if(n>=0)
{
    printf("\nYour elemnet index is %d \n",n);
    
}
else
{
    printf("\nThis Element is not in Array\n");
}

}

int main()
{
 int ch,x,re=-1,index;
 struct Array arr1={{1,2,3,4,5,6},10,6}; 
 struct Array arr2={{2,3,16,18,28},10,5}; 
 struct Array *arr3; 
 
do
 {
 printf("\n    Menu\n\n");
 printf("1.  Display\n");
 printf("2.  Insert\n");
 printf("3.  LinearSearch\n");
 printf("4.  Sum\n");
 printf("5.  RSum\n");
 printf("6.  Delete \n");
 printf("7.  Set\n");
 printf("8.  Get\n");
 printf("9.  Average\n");
 printf("10. Max\n");
 printf("11. Min\n");
 printf("12. Append\n");
 printf("13. Delete2\n");
 printf("14. BinarySearch\n");
 printf("15. Sorted\n");
 printf("16. SortedInsert\n");
 printf("17. Reverse\n");
 printf("18. Reverse2\n");
 printf("19. All Negative No on Left Hand Side\n");
 printf("20. Left Shift\n");
 printf("21. Right Shift\n");
 printf("22. Left Rotation\n");
 printf("23. Right Rotation\n");
 printf("24. Union\n");
 printf("25. Intersection\n");
 printf("26. Difference\n"); 
 printf("27. Merge\n");
 printf("28. RBinarySearch\n");
 printf("29. Exit\n");
 
 printf("\nEnter you choice :");
 scanf("%d",&ch);
 
 switch(ch)
 {
 case 1:Display(arr1);
 break;
 case 2: printf("\nEnter an element and index :");
 scanf("%d %d",&x,&index);
 Insert(arr1,index,x);
 break;
 case 3:printf("\nEnter element to search :");
 scanf("%d",&x);
 LinearSearch(arr1,x);
 break;
 case 4:printf("\nSum of Array Elements %d\n",Sum(arr1));
 break;
 case 5:printf("\nRSum of Array Elements %d\n",RSum(arr1,5));
 break;
 case 6: printf("\nEnter index :");
 scanf("%d",&index);
 Delete(arr1,index);
 break;
 case 7:printf("\nEnter an element and index :");
 scanf("%d %d",&x,&index);
 printf("\nSet Element in Array is %d\n",Set(arr1,index,x));
 break;
 case 8:printf("\nEnter an index :");
 scanf("%d ",&index);
 printf("\nSet Element in Array is %d\n",Get(arr1,index));
 break;
 case 9:printf("\nAvg of Array Elements %d\n",Avg(arr1));
 break;
 case 10:printf("\nMax Element from an Array %d\n",Max(arr1));
 break;
 case 11:printf("\nMin Element from an Array %d\n",Min(arr1));
 break;
 case 12:printf("\nEnter element to search :");
 scanf("%d",&x);
 Append(arr1,x);
 break;
 case 13:printf("\nEnter Element :");
 scanf("%d",&x);
 Delete2(arr1,x);
 break;
 case 14:printf("\nEnter element to search :");
 scanf("%d",&index);
 cout<<BinarySearch(arr1,index);
 break;
 case 15:Sorterd(&arr1);
 break;
 case 16:printf("\nEnter an Element To Insert  :");
 cin>>x;
 SortedInsert(arr2,x);
 break; 
 case 17:Reverse(&arr1);
 break; 
 case 18:Reverse2(&arr1);
 break; 
 case 19:ve(&arr1);
 break;
 case 20:LeftShift(&arr1);
 break; 
 case 21:RightShift(&arr1);
 break;
 case 22:LeftRotate(&arr1);
 break; 
 case 23:RightRotate(&arr1);
 break;  
 case 24:arr3=Union(&arr1,&arr2);
 Display(*arr3);
 break;
 case 25:arr3=Intersection(&arr1,&arr2);
 Display(*arr3);
 break;
 case 26:arr3=Diffrence(&arr1,&arr2);
 Display(*arr3);
 break;
 case 27:arr3=Merge(&arr1,&arr2);
 Display(*arr3);
 break;
 case 28:printf("\nEnter an Element To Search  :");
 cin>>x;
 re=RBinarySearch(arr1,x,0,arr1.length-1);
 if(re>=0){
		 printf("\nYour Elemnet index is %d \n",re);
		 
		 Display(arr1);
		 }
		 else
		 {
    	 printf("\nThis Element is not in Array\n");
         }
}
}while(ch<29);
 return 0;
}
