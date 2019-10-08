#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
	char a[100];
	cin>>a;
	cout<<a;
	int len=strlen(a);
	int x[len/2],y[len/2];

	for(int i=0;i<len/2;i++)
	{
		x[i]=a[i];
	}
	for(int i=len-1,j=0;i>len/2;j++,i--)
	{
		y[j]=a[i];
	}
	string xx="a";
	size_t f=a.find(xx);

	cout<<f;




}