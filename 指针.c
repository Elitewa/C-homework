#include<stdio.h>
int main()
{
	int array[5],i,x;
	printf("input array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("input number:");
	scanf("%d",&x);
	i=0;
	while(i<5)
	{
		if(x==array[i])
		{printf("i=%d",i);
		break;}
		else
		i++;
		
	}
	if(i==5)
	printf("error");
}
