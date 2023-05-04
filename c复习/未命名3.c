#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<100;a++)
	{
		if(a%3==0&&a%4!=0)
		{
			printf("%d\n",a);
			b++;
		}
	}
	printf("%d",b);
	return 0;
}
