#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string a;
	cin>>a;
	int n=a.length();

	int max=0,count=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]=='0')
		{
		count++;
		}
		else
		{
			if(count>max)
			{
				max=count;
			}
			count=0;
		}

	}
	cout<<max;

}