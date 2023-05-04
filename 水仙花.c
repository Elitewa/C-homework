#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,a,b,c;
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n: ");
	scanf("%d",&n);
	for(m;m<=n;m++)
	{
		a=m/100;
		b=m%10;
		c=m%100/10;
		if(m==pow(a,3)+pow(b,3)+pow(c,3))
		{printf("%d\n",m);}
	}
	return 0;
	}
