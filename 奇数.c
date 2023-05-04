#include<stdio.h>
int main()
{
	int s,k,a;
	for(a=1;a<=99;a+=2)
	{
		s+=a;
		k++;
	}
	printf("s=%d\nk=%d",s,k);
	return 0;
}
