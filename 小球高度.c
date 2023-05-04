#include<stdio.h>
int main()
{
	int n,a;
	float height,distance,b,c,d,s;
	printf("Input height: ");
	scanf("%f",&height);
	printf("Input n: ");
	scanf("%d",&n);
	b=height;
	a=n;
	s=0;
	for(n;n>=1;n--)
	{
		height=height/2;
	}
	if(a==1) //分三种情况，第三次落地以后上下反弹的路程才为首次的一半
	printf("distance=%.1f\n",b);
	else if(a==2)
	printf("distance=%.1f\n",2*b);
	else if(a>2)
	{
		d=b;
		for(a=a-2;a>=1;a--)
		{
			b=b/2;
			s=s+b;
		}
	printf("distance=%.1f\n",2*d+s);
	}
	printf("height=%.1f",height);
	return 0;
}//by:张鸿博
