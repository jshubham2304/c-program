#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char s1[100],s2[100],s3[100];

	cin>>s1;
	cin>>s2;

	int j=0;
	for(int i=0;s1[i]!='\0';i++)
	{
		if(i%2==0)
		{	
			s3[j]=s1[i];
			j++;
		}
	}

	for(int i=0;s2[i]!='\0';i++)
	{
		if(i%2!=0)
		{
			s3[j]=s2[i];
			j++;
		}
	}

	cout<<strcat(strcat(s1,s2),s3);


}