#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	scanf("%d",&x);
	int sum=0;
	int rem,i=0;
	while(x)
	{

		rem=x%10;
		sum=sum+rem*pow(2,i);
		x=x/10;
		i++;
	}

	printf("%d",sum);

}
