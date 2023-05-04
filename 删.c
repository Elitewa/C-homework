#include <stdio.h>
 int zhb(char s[100],char c)
{
	int i=0,p=0;
	char t[50]={0};
	while (s[i]!='\0')
	{
		if (s[i]!=c)
		{
			t[p]=s[i];
			p++;
		}
		i++;
	}
	printf("After deleted,the string is:%s",t);
}
int main()
{
	char s[100],c;
	printf("Input a string:");
	gets(s);
	printf("Input a char:");
	scanf("%c",&c);
	zhb(s,c);
}
