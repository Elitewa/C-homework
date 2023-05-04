#include<stdio.h>
int main()
{
	int s[10],a,b=0,c=0;
	for(a=0;a<10;a++)
	{
		scanf("%d",&s[a]);
		if(s[a]%2==0)
		{
			b++;
			c+=s[a];
		}
	}
	printf("%d %d",b,c);
	return 0;
}
