#include<stdio.h>
void main()
{
	void swap(int *a,int *b);
	int a,b;
	printf("Please input the first integer:\n");
	scanf("%d",&a);
	printf("Please input the second integer:\n");
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
