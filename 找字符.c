#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0,f=0,max;
	char s[80],b[2],c[8]={0},x;
	printf("Input a character:");
	scanf("%c",&x);
	b[1]=getchar();
	printf("Input a string:");
	gets(s);
	for(i=0;i<80;i++)
	{
		if(s[i]==x)
		{c[f]=i;
		f++;
		flag=1;}
	}
	if(flag==1)
	{
		max=c[0];
		for(i=0;i<8;i++)
		if(max<c[i])
		max=c[i];
		printf("index=%d",max);
	}
	if(flag==0)
	printf("Not Found");
	return 0;
}
