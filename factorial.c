#include<stdio.h>

long long fact(int x)
{
	if(x==1){
		return 1;
	}
	else
	{
		return (x*fact(x-1));
	}

}
int main()
{
	int x;
	scanf("%d",&x);
	long long y=fact(x);
	printf("%lld",y);
}