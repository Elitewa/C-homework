#include<stdio.h>
#include<string.h>
int main()
{
	char s[80];
	int i,counter,c;
	printf("Input a string:");
	scanf("%s",s);
	c=strlen(s);
	for(i=0;i<c;i++)
	{
		if(s[i]>'A'&&s[i]<='Z')
		{
			if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
			counter++;
		}
	}
	printf("count=%d",counter);
	return 0;
}
