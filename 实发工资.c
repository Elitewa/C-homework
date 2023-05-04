#include<stdio.h>
int main()
{
	int n,i;
	double s;
	struct waker
	{
		char name[10];
		int jg;
		int fg;
		int hu;
	}staff[10];
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %d",staff[i].name,&staff[i].jg,&staff[i].fg,&staff[i].hu);
	}
	for(i=0;i<n;i++)
	{
		s=staff[i].jg+staff[i].fg-staff[i].hu;
		printf("%5s,Salary is:%7.2lf\n",staff[i].name,s);
	}
	return 0;
}
