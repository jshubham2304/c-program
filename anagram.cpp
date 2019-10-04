#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int a[26]={0};

	string s1;
	string s2;
	cin>>s1;
	cin>>s2;

	for(int i=0;i<s1.length();i++)
	{
		int temp=s1[i]-'a';
		a[temp]++;
	}
	for(int i=0;i<s2.length();i++)
	{
		int temp=s1[i]-'a';
		if(a[temp]==0)
		{
			printf("NO");
			return 1;
		}
	}
	printf("YES");
	return 0;




}
