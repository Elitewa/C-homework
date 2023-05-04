#include<stdio.h>
int su(int x)
{
	int i,flag=1;
	for(i=2;i<x&&flag;i++)
	{
		if(x%i==0)
		flag=0;
	}
	if(flag==1)
	printf("%d is prime",x);
	else
	printf("%d is not prime",x);
	return 0;
}
int main()
{
	int x;
	printf("Input n:");
	scanf("%d",&x);
	su(x);
	return 0;
}
