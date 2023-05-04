#include<stdio.h>
int fun(int n)
{
	int s,h=0,c;
	for(n;n>=1;n--)
	{
		s=1;
		c=n;
		for(c;c>=1;c--)
		{
			s=s*c;
		}
		h+=s;
	}
	return h;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
}
