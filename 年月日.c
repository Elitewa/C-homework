#include <stdio.h>
int main()
{
	int year,m,day;
	scanf("%d %d",&year,&m);
 	if ((year%4==0&&year%100!=0)||year%400==0)
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{	
					day=31;
					if(m>=3&&m<=5)
					printf("Leap year,Spring,%d",day);
					else if(m>=6&&m<=8)
					printf("Leap year,Summer,%d",day);
					else if(m>=9&&m<=11)
					printf("Leap year,Fall,%d",day);
					else
					printf("Leap year,Winter,%d",day);
					}break;
			case 2:
				{day=29;
				printf("Leap year,Winter,%d",day);break;}
			case 4:
			case 6:
			case 9:
			case 11:
				{	
					day=30;
					if(m>=3&&m<=5)
					printf("Leap year,Spring,%d",day);
					else if(m>=6&&m<=8)
					printf("Leap year,Summer,%d",day);
					else if(m>=9&&m<=11)
					printf("Leap year,Fall,%d",day);
					else
					printf("Leap year,Winter,%d",day);
				}break;
		}
	}
	else
	{ 
		switch(m)
		{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
				{	
					day=31;
					if(m>=3&&m<=5)
					printf("Common year,Spring,%d",day);
					else if(m>=6&&m<=8)
					printf("Common year,Summer,%d",day);
					else if(m>=9&&m<=11)
					printf("Common year,Fall,%d",day);
					else
					printf("Common year,Winter,%d",day);
				}break;
				case 2:
					{day = 28;
					printf("Common year,Winter,%d",day);
					}break;
				case 4:
				case 6:
				case 9:
				case 11:
				{	
					day=30;
					if(m>=3&&m<=5)
					printf("Common year,Spring,%d",day);
					else if(m>=6&&m<=8)
					printf("Common year,Summer,%d",day);
					else if(m>=9&&m<=11)
					printf("Common year,Fall,%d",day);
					else
					printf("Common year,Winter,%d",day);
				}break;
		}
	}	
	return 0;
}
