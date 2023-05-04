#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	scanf("%d %d% %c",&a,&b,&ch);
	switch(ch)
	{
		case'+':
			c = a + b;
			printf("%d",c);break;
		case'-':
			c = a - b;
			printf("%d",c);break;
		case'*':
			c = a * b;
			printf("%d",c);break;
		case'/':
		{
			if(a/b==0)
			{c= a / b;
			printf("%d",c);
			}
			else
			{c=a/b;
			printf("%.2f",c);
			}
		}
	}
}
