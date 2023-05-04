#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(c<a)
		{
			printf("%d",a);
		}
		else 
		{
			printf("%d",c);	
		}
		
	}
	if(a<b)
	{
		if(c<b)
		{
			printf("%d",b);
		}
		else 
		{
			printf("%d",c);	
		}
		
	}
}
