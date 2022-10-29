////#include<iostream>
////using namespace std;
////
////void avg(int a[]) {
////	int sum;
////    float avg;
////	for(int i=0;i<10;i++)
////    {
////    	sum+=a[i];
////	}
////		avg=sum/10;
////		
////	cout<<"Sum = "<<sum<<endl<<"Avg = "<<avg<<endl;
////}
////
////void max_min(int a[10]) {
////	int max,min;
////	max=a[0];
////	min=a[0];
////	for(int i=0;i<10;i++)
////    {
////    	if(max<a[i])
////    	{
////    		max=a[i];
////		}
////		
////		if(min>a[i])
////    	{
////    		min=a[i];
////		}
////	}
////	cout<<"Max = "<<max<<endl<<"Min = "<<min<<endl;
////}
////
////int main()
////{
////    int a[10];
////    cout<<"Enter No in an array: ";
////    for(int i=0;i<10;i++)
////    {
////    cin>>a[i];
////	}	
////	avg(a);
////	max_min(a);
////}
//
//#include <iostream>
//using namespace std;
//
//int max_of_four(int a, int b, int c, int d) {
//    int z;
//    if(a>b)
//    {
//        if(a>c)
//        {
//        if(a>d)
//        {
//        z=a;
//        return z;
//        }
//        }
//    }
//    else if(b>a)
//    {
//        if(b>c)
//        {
//        if(b>d)
//        {
//        z=b;
//        return z;
//        }
//        }
//    }
//    else if(c>a)
//    {
//        if(c>b)
//        {
//        if(b>d)
//        {
//        z=c;
//        return z;
//        }
//        }
//    }
//    else if(d>a)
//    {
//        if(d>b)
//        {
//        if(d>c)
//        {
//        z=d;
//        return z;
//        }
//        }
//    }
//}
//
//int main() {
//    int a, b, c, d;
//    cin>>a>>b>>c>>d;
//    int ans = max_of_four(a, b, c, d);
//    // int sum = 0;
//    // sum += a;
//    // sum += b;
//    // sum += c;
//    // sum += d;
//    // return sum;
//    cout<<ans;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void ary(int n,int m,int *arr[]) {
// 	
//    for(int i=0;i<n;i++) {
//        int t;
//        cin>>t;
//        arr[i]=new int[t];
//        for(int k=0;k<t;k++) {
//            cin>>arr[i][k];
//        }
//    }
//    
//    for(int k=0;k<n;k++) {
//        int i,j;
//        cin>>i>>j;
//        cout<<(arr[i])[j]<<endl;
//    }
//}
//
//int main() {
//	int n,m;
//	cin>>n>>m;
//    int* arr[n];   
//    ary(n,m,arr);
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//int main() {
//    int n;
//    cin>>n;
//        
//    int* arr[n];
//    for(int i = 0; i < n; i++ ) {
//        int k;
//        cin>>k;
//        arr[i] = new int[k];
//        for(int z = 0; z < k; z++) {
//            cin>>arr[i][k];
//        }
//    }
//    
//    for(int w=0; w<n; w++) {
//        int i, j;
//        cin>>i>>j;
//        cout <<arr[i][j] << endl;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//
//int main() {
//    int a, q;
//    cin>>a>>q;
//        
//   
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int add(int n);
//
//int main()
//{
//	int n;
//	cout<<"Enter a positive interger: ";
//	cin>>n;
//	cout<<"Sum = "<<add(n);
//	return 0;
//}
//int add(int n){
//	if(n != 0)
//	return n + add(n-1);
//return 0;
//}


//#include<iostream>
//using namespace std;
//
//bool ad(int n);
//
//int main()
//{
//	int n1,n2,n=0;
//	bool a;
//	cout<<"Enter a range:";
//	cin>>n1>>n2;
//	
//	if(n1>n2)
//	{
//		int temp=n2;
//		n2=n1;
//		n1=temp;
//	}
//	
//	for(int n=n1+1;n<n2;n++)
//	{
//		a=ad(n);
//		//cout<<"a ="<<a;
//	if(a)
//	{
//		cout<<n<<" ";
//	}
//    }
//	return 0;
//}
//
//bool ad(int n)
//{
//	if(n<2)
//	{
//		return false;
//	}
//	else if(n>2)
//	{
//		for(int i=2;i<n;i++)
//		{
//			if((n%i)==0)
//			{
//			return false;
//			}
//			else
//			{
//				return true;
//			}
//		}
//	}
//}

//#include<iostream>
//using namespace std;
//
//bool ad(int n);
//
//int main()
//{
//	int n;
//	cout<<"Enter a range:";
//	cin>>n;
//	
//	for(int i=2;i<=n/2;i++)
//	{
//		if(ad(n)){
//		if(ad(n-i)){
//			cout<<n<<"="<<n-i<<"+"<<i<<endl;
//		 }
//	  }
//	}	
//	return 0;
//}
//
//bool ad(int n)
//{
//	if(n<2)
//	{
//		return false;
//	}
//	else if(n>2)
//	{
//		for(int i=2;i<n;i++)
//		{
//			if((n%i)==0)
//			{
//			return false;
//			}
//			else
//			{
//				return true;
//			}
//		}
//	}
//}


//#include<iostream>
//using namespace std;
//
//int fact(int n);
//
//int main()
//{
//	int n;
//	cout<<"Enter a positive interger: ";
//	cin>>n;
//	cout<<"Factorial = "<<fact(n);
//	return 0;
//}
//int fact(int n){
//	if(n > 0)
//	return n * fact(n-1);
//	else
//	return 1;
//}

//#include<iostream>
//using namespace std;
//
//int po(int n,int p);
//
//int main()
//{
//	int n,p,v,i;
//	cout<<"Enter a positive interger :";
//	cin>>n;
//	cout<<"Enter a power :";
//	cin>>p;
//	v = po(n,p);
//	cout<<po(n,p);
//	if(v)
//	{
//		cout <<n<<"^"<<p<<"="<<v;		
//	}
//	else
//	{
//		cout<<"Invalid Input";
//	}
//	return 0;
//}
//
//int po(int n,int p){
//	if(n > 0 && p > 0)
//	{
//	return n * po(n,p);
//	}
//	else
//	{
//	return 1;
//	}
//}

//#include<iostream>
//using namespace std;
//
//int hcf(int n1,int n2);
//
//int main()
//{
//	int n1,n2,v;
//	cout<<"Enter interger 1 and 2 :";
//	cin>>n1>>n2;
//	v = hcf(n1,n2);
//	if(v)
//	{
//		cout<<"H.C.F of "<<n1<<" & "<<n2<<" is: "<<v;		
//	}
//	else
//	{
//		cout<<"Invalid Input";
//	}
//	return 0;
//}
//
//int hcf(int n1,int n2){
//	if(n2>0) 
//	{
//	return hcf(n2,n1%n2);
//	}
//	else
//	{
//	return n1;
//	}
//}

//#include<iostream>
//using namespace std;
//
//int hcf(int n1[][5],int n2[][5],int r1,int c1,int r2,int c2)
//{
//	int i,j,k,a[5][5];
//	
//	cout<<"Sum =";
//	
//	for(i=0;i<r1;i++)
//	{
//		for(j=0;j<c2;j++)
//		{
//		for(k=0;k<c1;k++)
//		{
//		a[i][j]=n1[i][k]+n2[k][j];
//		}
//		}
//	}
//	
//		for(i=0;i<r1;i++)
//	{
//		for(j=0;j<c2;j++)
//		{
//			cout<<" "<<a[i][j];
//		}
//	}
//	
//	cout<<endl;
//}
//
//int main()
//{
//	int n1[5][5],r1,r2,c1,c2,i,j,k,n2[5][5];
//	cout<<"Enter rows and columns for first matrix: ";
//	cin>>r1>>c1;
//	cout<<"Enter rows and columns for Second matrix: ";
//	cin>>r2>>c2;
//	
//	if(r2==c1)
//	{
//	for(i=0;i<r1;i++)
//	{
//		for(j=0;j<c1;j++)
//		{
//		cout<<"A"<<i<<j<<"=";
//		cin>>n1[i][j];
//		}
//	}
//		
//	for(i=0;i<r2;i++)
//	{
//		for(j=0;j<c2;j++)
//		{
//		cout<<"n"<<i<<j<<"=";
//		cin>>n2[i][j];
//		}
//	}
//	hcf(n1,n2,r1,c1,r2,c2);
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void hcf(string n1,char q)
//{
//	int i,x=0;
//	
//	for(i=0;i<n1.size();i++)
//	{
//		if(q == n1[i])
//		{
//			x++;
//		}
//	}
//	
//	if(x)
//	{
//		cout<<"Occurence of "<<q<<" is "<<x<<" times ";
//	}
//}
//	
//int main()
//{
//	string n1;
//	char q;
//	int i;
//	cout<<"Enter the string : ";
//	getline(cin,n1);
//	cout<<"Enter a character : ";
//	cin>>q;
//	hcf(n1,q);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void hcf(string n1[10])
//{
//	string temp;
//	
//	for (int i = 0; i < 9; ++i) {
//        for (int j = 0; j < 9 - i; ++j) {
//            if (n1[j] > n1[j+1]) {
//                temp = n1[j];
//                n1[j] = n1[j+1];
//                n1[j+1] = temp;
//            }
//        }
//    }
//	
//	cout << "In lexicographical order: " << endl;
//
//    for(int i = 0; i < 10; ++i)
//    {
//       cout << n1[i] << endl;
//    }
//
//}
//	
//int main()
//{
//	string n1[10];
//	char q;
//	int i;
//	cout<<"Enter the string : ";
//	for(i=0;i<10;i++)
//	{
//	getline(cin,n1[i]);
//	}
//	
//	hcf(n1);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//int n, q,i;
//cin>>n>>q;
//string temp;
//vector<string> hrml;
//vector<string> quer;
//cin.ignore();
//for(i=0;i<n;i++)
//{
//    getline(cin,temp);
//    hrml.push_back(temp);
//}
//for(i=0;i<q;i++)
//{
//    getline(cin,temp);
//    quer.push_back(temp);
//}
//map<string, string> m;
//vector<string> tag;
//for(i=0;i<n;i++)
//{
//    temp=hrml[i];
//    temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
//    temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());
//    if(temp.substr(0,2)=="</")
//    {
//        tag.pop_back();
//    }
//    else
//    {
//        stringstream ss;
//        ss.str("");
//        ss<<temp;
//        string t1,p1,v1;
//        char ch;
//        ss>>ch>>t1>>p1>>ch>>v1;
//        string temp1="";
//        if(tag.size()>0)
//        {
//            temp1=*tag.rbegin();
//            temp1=temp1+"."+t1;
//        }
//        else
//            temp1=t1;
//        tag.push_back(temp1);
//        m[*tag.rbegin()+"~"+p1]=v1;
//        while(ss)
//        {
//            ss>>p1>>ch>>v1;
//            m[*tag.rbegin()+"~"+p1]=v1;
//        }
//    }
//}
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//float SD(float x[])
//{
//	int i,n=10;
//	float SD,mean,sum;
//	
//	for(i=0;i<n;i++)
//	{
//		sum+=x[i];
//	}
//	
//	mean=sum/10;
//	
//	for(i=0;i<n;i++)
//	{
//		SD+=pow(x[i]-mean,2);
//	}
//	
//	return sqrt(SD/10);	
//}
//int main()
//{
//	float x[10];
//	int i,n=10;
//	
//	cout<<"Enter the value";
//	for(i=0;i<n;i++)
//	{
//		cin>>x[i];
//	}
//	
//	cout<<"Standard Deviation is ="<<SD(x);
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int SD(int &x)
//{
//	int y,i,sum=0;
//	
//	for(i=1;x>0;)
//	{
//		y=x%10;
//		x=x/10;
//		sum+=i*y;
//		i*=2;
//	}
//	
//	return sum;
//}
//int main()
//{
//	int x,i,n;
//	cout<<"Enter a Binary No :";
//	cin>>x;
//	cout<<"Decimal Conversion of Binary No is :"<<SD(x);
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int SD(int &x)
//{
//	int y,i,sum=0;
//	
////	for(i=1;x>0;)
////	{
////		y=x%10;
////		x=x/10;
////		sum+=i*y;
////		i*=2;
////	}
////	
////	x=sum;
//
//	for(i=0;x>0;i++)
//	{
//		y=x%8;
//		cout<<y<<endl;
//		x=x/8;
//		cout<<x<<endl;
//		sum=y+(sum*10);
//		cout<<"SUM ="<<sum<<endl;
//	}
//	
////	for(i=0;x>0;i++)
////	{
////		y=x%10;
////		x=x/10;
////		sum+=pow(8,i)*y;
////	}
//	
//	return sum;
//}
//int main()
//{
//	int x,i,n;
//	cout<<"Enter a Octal No :";
//	cin>>x;
//	cout<<"Decimal Conversion of Octal No is :"<<SD(x);
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//struct student{ 
//	int seconds,minutes,hours;
//};
//
//void fun(struct student &d)
//{
//	student f;
//	int s,m,h;
//	cin>>f.hours>>f.minutes>>f.seconds;
//	if(f.seconds<d.seconds)
//	{
//		f.minutes-1;
//		s=(f.seconds+60)-d.seconds;
//	}
//	
//	if(f.minutes<d.minutes)
//	{
//		f.hours-1;
//		m=(f.minutes+60)-d.minutes;
//	}
//	
//	h=f.hours-d.hours;
//	cout<<h<<":"<<m<<":"<<s<<endl;
//	
//}
//
//int main()
//{
//	student s;
//	cin>>s.hours>>s.minutes>>s.seconds;
//	fun(s);
//    return 0;
//}

#include<iostream>
#include<math.h>
using namespace std;

struct student{ 
	int inch,feet;
};

void fun(struct student &d)
{
	student f,add,h,m;
	cin>>f.feet>>f.inch;
		
		if(f.feet>d.feet)
	{
		h.feet=f.feet-d.feet;
		h.inch=f.inch-d.inch;
	}
	else
	{
		m.feet=d.feet-f.feet;
		m.inch=d.inch-f.inch;
	}
	
		if(m.inch>12)
		{
		m.feet++;
		m.inch=m.inch-13;	
		}
		else if(h.inch>12)
		{
		h.feet++;
		h.inch=h.inch-13;
		}
	
	
	cout<<"f-d"<<endl;
	cout<<"Feet :"<<h.feet<<" & Inch :"<<h.inch<<endl;
	
	cout<<"d-f"<<endl;
	cout<<"Feet :"<<m.feet<<" & Inch :"<<m.inch<<endl;
	
	add.feet=f.feet+d.feet;
	add.inch=f.inch+d.inch;
	
	if(add.inch>12)
	{
		add.feet++;
		add.inch=add.inch-13;
	}
	
	cout<<"f+d"<<endl;
	cout<<"Feet :"<<add.feet<<" & Inch :"<<add.inch<<endl;
	
}

int main()
{
	student s;
	cin>>s.feet>>s.inch;
	fun(s);
    return 0;
}
