#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char a[100];
	scanf("%[^\n]s",a);
	
	int len=strlen(a);
	printf("%d\n",len);
	

	

	int count=0;
	int i=0;
	do
	{
		
		if(a[i]==' ')
		{
			int flag=1,k;
			for(k=i-1;a[k]!=' ' && k>=0;k--);

			
			for(int j=k+1,n=0;j<(i+k)/2;j++,n++)
			{
				if(a[j]!=a[i-n-i])
				{
					flag=0;
				}
				
				

			}	
			if(flag)
			{
				count++;
			}
			
		}
		i++;
	}while(i<len);
	printf("%d\n",count );

}