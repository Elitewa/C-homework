#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,c,d,f;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		c=i/100;
		d=i%10;
		f=(i-c*100-d)/10;
		if(i==pow(c,3)+pow(d,3)+pow(f,3))
		{
			printf("%d\n",i);
		}
		
	}
return 0;	
}
