#include<stdio.h>
int loop(int x)
{
	int b,c,d,z,v,p;
	if(x<10)
	{
		printf("%d\n",x);
	}
	if(x>=10&&x<=99)
	{
		b=x%10;
		c=x/10;
		if((b*10+c)==x)
		{
			printf("%d\n",x);
		}
			
	}
	if(x>=100)
	{
		b=x%10;
		c=x/100;
		d=x-100*c-b;
		if(x==b*100+c+d)
		printf("%d\n",x);
	}
	if(x>=1000)
	{
		b=x%10;
		c=x/1000;
		d=(x-1000*c-b)/100;
		if(x==(b*1000+c+d*100+d*10))
		printf("%d\n",x);
	}
		if(x>=10000)
		{
			b=x%10;//个位
			c=x/10000;//万位
			d=(x-c*10000-b)/10;//qian ge 0
			v=d/100;// bai wei
			p=d%10;// ge wei
			z=(d-v*100-p)/10;//10
			if(x==(b*10000+c+z*100+v*10+p*1000))
			printf("%d\n",x);
		}
}
int main()
{
	int i,a,b;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		loop(i);
	}
}
