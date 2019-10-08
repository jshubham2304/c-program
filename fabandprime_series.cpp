#include<iostream>

using namespace std;

int * findf(int sz)
{
	int* f1=new int[sz];
	int a1=1,a2=1;
	f1[0]=a1;
	f1[1]=a2;
	for(int i=2;i<sz;i++)
	{
		int a3=a1+a2;
		f1[i]=a3;
		a1=a2;
		a2=a3;
		

	}
	for(int i=0;i<sz;i++)
	{
		cout<<f1[i]<<" ";
	}
	cout<<"\n";
	return f1;


}

int * findp(int sz)
{
	int* p1=new int[sz]; // in c pass array in function
	p1[0]=2;
	int i=1,flag=0,j=2;
	while(i<sz)
	{
		j=j+1;
		flag=0;
		for(int x=2;x<=j/2;x++)
		{
			if(j%x==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			p1[i++]=j;
		}
	}
	for(int i=0;i<sz;i++)
	{
		cout<<p1[i]<<" ";
	}
	cout<<"\n";
	return p1;
}

int main()
{
	int n;
	cin>>n;
	int sz=n/2+1;

	int* f;
	int* p;

	f=findf(sz);

	p=findp(sz);

	

	

	int a[n];
	int fsz=0,psz=0;
	for(int i=0;i<n;i++)
	{

		if(i%2==0)
		{
			a[i]=f[fsz++];
		}
		else
		{
			a[i]=p[psz++];
		}
		cout<< a[i]<<" ";
	}

	cout<<a[n-1];




}