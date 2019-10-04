#include<iostream>

using namespace std;

struct Date
{
	int dd;
	int mm;
	int yyyy;

};


int dom(int mm,int yyyy)
{
		int days=0;
		switch(mm)
			{
				case 1:
					days=31;
					break;
				case 2:
					if(yyyy%4==0)
						days=28;
					else
						days=29;
					break;
				case 3:
					days=31;
					break;
				case 4:
					days=30;
					break;
				case 5:
					days=31;
					break;
				case 6:
					days=30;
					break;
				case 7:
					days=31;
					break;
				case 8:
					days=31;
					break;
				case 9:
					days=30;
					break;
				case 10:
					days=31;
					break;
				case 11:
					days=30;
					break;
				case 12:
					days=31;
					break;
				default:
					break;	
			}

		return days;	
}

int main()
{
	int year=0,days=0;
	int flag=0;
	struct Date d[2];
	struct Date checkd;
	
	for(int i=0;i<2;i++)
	{
		cout<<"Enter dates:"<< i;
		cin>>d[i].dd;
		cin>>d[i].mm;
		cin>>d[i].yyyy;
	}

	checkd=d[1];
	if(d[1].yyyy > d[0].yyyy)
	{
		
		year=d[1].yyyy-d[0].yyyy-1;
		flag=1;
		days=dom(d[0].mm,d[0].yyyy)-d[0].dd+d[1].dd;
		checkd=d[0];

	}
	else if(d[1].yyyy<d[0].yyyy)
	{
		year=d[0].yyyy-d[1].yyyy-1;	
		days=dom(d[1].mm,d[1].yyyy)-d[1].dd+d[1].dd;
		checkd=d[1];
	}
	else
	{
		days=d[1].dd+dom(d[0].mm,d[0].yyyy)-d[0].dd;
		for(int i=d[0].mm+1;i<d[1].mm;i++)
		{
			days=days+dom(i,d[0].yyyy);
		}
		cout<<"Total days:"<<days;
		return 1;
	}


	while(year)
	{
		checkd.yyyy+=1;

		if(checkd.yyyy%4!=0)
		{
			days=days+365;
		}
		else
		{
			days=days+366;
		}	
		year--;
		
	}

	int x=2;

	while(x)
	{
		x--;
		int mm=d[x].mm;
		while(mm >0 && mm<=12)	
		{
			if(x==1)
			{
				mm--;
				days=days+dom(mm,d[x].yyyy);

			}
			else if(x==0)
			{
				mm++;
				days=days+dom(mm,d[x].yyyy);
			}
		}
		
	}

	cout<<"Total Days : "<<days;


}