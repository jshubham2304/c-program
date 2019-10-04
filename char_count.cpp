#include<iostream>
 #include<string.h>

using namespace std;

int main(int arg, char *argv[])
{

	char *value=argv[1];
	int l=strlen(value);

	int count=1;
	for(int i=1;i<l;i++)
	{
		if(value[i]!=value[i-1])
		{
			cout<<count<<value[i-1];
			count=1;
			continue;
		}
		count++;
	}
	cout<<count<<value[l-1];

}