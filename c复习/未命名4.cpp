#include<stdio.h>
int main()
{
	int n,i,a=1;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a*=i;
		printf("%d!=%d\n",i,a);
	}
return 0;	
}
