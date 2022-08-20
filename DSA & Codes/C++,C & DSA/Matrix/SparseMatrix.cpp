#include<iostream>
using namespace std;

//Creating Struct 
struct Elements
{
int i;
int j;
int x;
};

//Creating 2nd Struct
struct Sparse
{
int n;
int m;
int num;
struct Elements *e; //element of 1 struct
};

//Creating in an Array
void create(struct Sparse *s)
{
	cout<<endl<<"Enter The Dimensions of the Matrix :"<<endl;
	cout<<"rows :";
	cin>>s->n;
	cout<<"column :";
	cin>>s->m;
	
	//No of Non-Zeo Elements
	cout<<endl<<"Enter the no Non-Zero Elements :";
	cin>>s->num;
	
	s->e=new Elements[s->num];
	
	//Entering Non-Zero Elemnts
	cout<<endl<<"Enter the Non-Zero Elements :"<<endl;
	for(int i=0;i<s->n;i++)
	{
	cout<<"Rows :";
	cin>>s->e[i].i;
	cout<<"Column :";
	cin>>s->e[i].j;
	cout<<"Element ";
	cin>>s->e[i].x;
	}
}

//Adding an Array in an Array
struct Sparse *add(struct Sparse *s1,struct Sparse *s2)
{
	struct Sparse *sum;
 	int i,j,k;
 	i=j=k=0;
	if(s1->n != s2->n && s1->m && s2->m)
	{
		return 0;
	}
	
	sum=new Sparse();
	sum->e = new Elements[s1->num+s2->num];
	
	while(i<s1->num && j<s2->num)
 	{
	if(s1->e[i].i < s2->e[j].i)
	{
		sum->e[k++] = s1->e[i++];
	}
	else if(s2->e[i].i < s1->e[j].i)
	{
		sum->e[k++] = s2->e[j++];
	}
	else
	{
	if(s1->e[i].j < s2->e[j].j)
	{
		sum->e[k++] = s1->e[i++];
	}
	else if(s2->e[i].j < s1->e[j].j)
	{
		sum->e[k++] = s2->e[j++];	
	}
	else
	{
		sum->e[k]=s1->e[i];
		sum->e[k++].x = + s1->e[i++].x + s2->e[j++].x;
	}
	}
	}
	
	for(;i<s1->num;i++)
	{
		sum->e[k++]=s1->e[i++];
	}
	
	for(;j<s2->num;j++)
	{
		sum->e[k++]=s2->e[j++];
	}
	
	sum->n=s1->n;
	sum->m=s1->m;
	sum->num=k;
	
	return sum;
}

//Displaying Elements from Array in a form Matrix
void display(struct Sparse *s)
{
	int k=0;
	for(int i=0;i<s->m;i++)
 {
 	for(int j=0;j<s->n;j++)
 	{
 	if(i==s->e[k].i && j==s->e[k].j)
 	{
 	cout<<s->e[k++].x<<" ";
 	}
 	else
 	{
 	cout<<"0 ";	
	}
	}
	cout<<endl;
}
}

int main()
{
	//creating struct
	struct Sparse s1,s2,*s3;
	
	create(&s1);
	create(&s2);
	
	s3=add(&s1,&s2);
	
 	cout<<"First Matrix\n"<<endl;
 	display(&s1);
 	cout<<"Second Matrix\n"<<endl;
 	display(&s2);
 	cout<<"Sum Matrix\n"<<endl;
 	display(s3);
	return 0;
}
