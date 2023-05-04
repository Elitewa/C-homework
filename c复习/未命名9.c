#include<stdio.h>
int main()
{
	int s[10],a,b;
	for(a=0;a<10;a++)
	{
		scanf("%d",&s[a]);
	}
	b=s[0];
	for(a=0;a<10;a++)
	{	
		if(b>s[a])
		b=s[a];
	}
	printf("%d",b);
	return 0;
}
