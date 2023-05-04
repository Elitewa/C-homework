#include<stdio.h>
int main()
{
	int a[10],i,x,n=10;
	printf("input array data: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("input search data:");
	scanf("%d",&x);
	search(a,n,x);
}
void search(int *array,int n,int x)
{
	int i,flag=0;
	for(i=0;i<10;i++)
	{
		if(*(array+i)==x)
		{printf("%d",i);
		flag=1;}
		
	}
	if(flag==0)
	printf("NO!");
}
