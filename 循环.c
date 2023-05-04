#include<stdio.h>
int main()
{
	int n,a;
	n=1;
	while(n<=100)
	{a=0+n;
	n=++n;
	printf("a=%d\n",a);
	}
	return 0;
}
