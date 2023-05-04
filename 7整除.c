#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=100;a++)
	{
		if(b%5==0&&a%7==0)
		{printf("\n");}
		if(a%7==0)
		{
			printf("%d ",a);
			++b;
		}

		

	}
	return 0;
}
