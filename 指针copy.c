#include<stdio.h>
#include<string.h>
int main()
{
	void str_copy(char *str1,char *str2);
	char str1[10],str2[10];
	printf("Input str1:");
	scanf("%s",str1);
	str_copy(str1,str2);
	printf("Output str2:%s",str2);
	return 0;
}
void str_copy(char *str1,char *str2)
{
	strcpy(str2,str1);
}
