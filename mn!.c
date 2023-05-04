#include<stdio.h>
int main()
{
	int m,n,s,a=1,b=1,c,d;
	printf("Enter m: ");
	scanf("%d",&c);
	printf("Enter n: ");
	scanf("%d",&d);
	m=c;
	n=d;
	for(m;m>0;m--)
	{a*=m;}
	for(n;n>0;n--)
	{b*=n;}
	s=a+b;
	printf("%d!+%d!=%d",c,d,s);
	return 0;
}
