#include<stdio.h>
#include<string.h>
#include<math.h>

void hextodec()
{
	char hex[10];
	scanf("%s",hex);
	int l=strlen(hex);
	int i,j;
	int sum=0;
	for(i=l-1,j=0;i>=0;i--,j++)
	{

		char tp=hex[i];
		if(tp>='A' && tp<='F')
		{
			sum+=(hex[i]-55)*pow(16,j);
		}
		else
		{
			sum+=(hex[i]-48)*pow(16,j);
		}

	}
	printf("%s of %d",hex,sum);
}

void dectohex(int n)
{
	int rem;
	char sum[10];
	int i=0,j;
	while(n)
	{
		rem=n%16;
		if(rem<10)
		{
			sum[i++]=rem+48;
		}
		else
		{
			sum[i++]=rem+55;
		}
		n=n/16;
	}

	for(j=i-1;j>=0;j--)
	{
		printf("%c",sum[j]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	dectohex(n);
	
}

