#include<stdio.h>
int main()
{
	int i[10]={0},b,c,flag=1;
	printf("input array:");
	for(b=0;b<10;b++)
	{
		scanf("%d",&i[b]);
	}
	printf("input number:");
	scanf("%d",&c);
	for(b=0;b<10&&flag;b++)
	{
		if(c==i[b])
		{
			printf("i=%d",b);
			flag=0;
		}
	
	}
	
	return 0;
}
