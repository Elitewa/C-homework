#include<stdio.h>
int fun(int n)
{
	int s=1,b,h=0,c,i;
	for(n;n>=1;n--)
		{
			s*=n;
			
		}
	return s;
}
int main()
{
	int n,s=0;
	scanf("%d",&n);
	for(n;n>=1;n--)
	{s+=fun(n);}
	printf("%d",s);
}
