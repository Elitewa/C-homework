#include<stdio.h>
int main()
{
	int i;
	float ave,s[5],sum;
	printf("input numbers:");
	for(i=0;i<10;i++)
	scanf("%f",&s[i]);
	for(i=0;i<5;i++)
	{
		sum+=s[i];
	}
	ave=sum/5;
	printf("ave=%.2lf",ave);
	return 0;
	
}
