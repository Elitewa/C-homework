#include<stdio.h>
int main()
{
	int a, b;
	double d,e,g;
	char c;
	scanf("%d %d %c", &a,&b,&c);
	switch (c)
	{
		case'+':
		printf("%d",a+b);break;
		case'-':
		printf("%d",a-b);break;
		case'*':
		printf("%d",a*b);break;
		case'/':
		if (a%b==0)
		{
			printf("%d",a/b);
		}
		else
		{
			d=b;
			e=a;
			g=e/d;
			printf("%.2lf", g);
			break;
			default:printf("invalid operator");break;
		}

    }
	return 0;

}
