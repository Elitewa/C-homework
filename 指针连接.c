#include<stdio.h>
void fun(char *s1,char *s2)
{
	while(*s1!='\0')
	{
		s1++;
	}
	while(*s2!='\0')
	{
		*s1++=*s2++;
	}
}

int main()
{
	char s1[80];
	char s2[80];
	printf("input s1:");
		gets(s1);
	printf("input s2:");
		gets(s2);
		fun(s1,s2);
	printf("%s",s1);
	return 0;
}
