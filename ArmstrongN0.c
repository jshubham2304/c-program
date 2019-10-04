#include<stdio.h>

int power(int n,int p)
{
	int sum=n;
	while(--p)
	{
		sum=sum*n;
	}
	return sum;
}

int main(int arg,char *argv[])
{
	int n,temp,count=0,sum=0;
	n=atoi(argv[1]);
	temp=n;
	while(temp)
	{
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp)
	{
		int x=temp%10;
		sum=sum+power(x,count);
		temp=temp/10;
	}
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	return 0;
}