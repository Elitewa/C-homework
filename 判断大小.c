#include<stdio.h>
int main()
{
	int a,b,c,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		min=b;
	else
		min=a;
	if(min<c)
		printf("%d",min);
	else
		printf("%d",c);
}
