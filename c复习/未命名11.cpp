#include<stdio.h>
int main()
{
	int i=0,a=0,b=0,c=0,k=0,o=0;
	char q[20];
	gets(q);
	for(i=0;q[i]!='\0';i++)
	{
		if(q[i]>='0'&&q[i]<='9')
			a++;
		else if(q[i]>='a'&&q[i]<='z')
			b++;
		else if(q[i]>='A'&&q[i]<='Z')
			c++;
		else if(q[i]==' ')
			k++;
		else 
			o++;			
	}
	printf("小写%d大写%d数字%d空格%d其他%d",b,c,a,k,o);
	return 0;
}
