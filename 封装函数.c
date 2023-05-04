#include<stdio.h>
int x,y;
void elite(x,y)
{
	int sum;
	sum=x+y;
	printf("sum=%d",sum);
}
int main()
{
	int b,a;
	scanf("%d %d",&b,&a);
	elite(b,a);
}
