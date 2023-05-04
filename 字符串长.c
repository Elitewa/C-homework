#include <stdio.h>
int ou(char s[20])
{
    int i=0;
	while (s[i++]!='\0');  
    printf("%d",i-1);

}
int main()
{
    char s[20];
	gets(s);
	ou(s);
}
