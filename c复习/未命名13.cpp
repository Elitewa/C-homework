#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,flag=1;
	scanf("%d",&i);
		for (j=2;j<=sqrt(i)&&flag;j++)
		{
			if (i%j==0)
			{
				flag = 0;
				printf("²»ÊÇÄØ");
			}
		}
	if (flag==1)
	{
		printf("ÊÇÄØ");
	}
	
	return 0;
}
