#include<stdio.h>
int main()
{
	int a,i;
	a=0;
	i=1;
	do{
		a+=1;
		i++;
	}while(i<=100);
	printf("%d",a);
	return 0;
}
