#include<iostream>

using namespace std;

void printarr(int a[3][5],int r,int c)
{
	int rs=0,re=r,cs=0,ce=c;
	int i;

	while(rs<re && cs<ce)
	{
		for(i=cs;i<ce;i++)
		{
			cout<<a[rs][i]<<" ";
		}
		rs++;
		for(i=rs;i<re;i++)
		{
			cout<<a[i][ce-1]<<" ";
		}
		ce--;
		if(rs<re)
		{
			for(i=ce;i>cs;i--)
			{
				cout<<a[re-1][i-1]<<" ";
			}
			re--;
		}
		if(cs<ce)
		{
			for(i=re;i>rs;i--)
			{	
				cout<<a[i-1][cs]<<" ";
			}
			cs++;
		}

	}

}


int main()
{
	int a[3][5]={
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15}
	};

	printarr(a,3,5);
}