#include<stdio.h>
int main()
{
	int i,s[10],counter=0;
	float h,ave;
	printf("Input numbers: ");
	for(i=0;i<10;i++)
	{
	scanf("%d",&s[i]);
	}
	for(i=0;i<10;i++)9
	{
		if(s[i]%2==0)
		{
			counter++;
			h=h+s[i];
		}
	}
	ave=h/counter;
	printf("the number of even number is: %d\n",counter);
	printf("the average of even number is: %.1lf",ave);
	
	
}
