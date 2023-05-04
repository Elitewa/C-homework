#include<stdio.h>
int main()
{
	char ch;
	int letter=0,shu=0,other=0,blank=0;
	printf("Input 10 characters: ");
	while((ch=getchar())!='\n')
	{
		if(ch>='A'&&ch<='z')
		++letter;
		else if(ch>='0'&&ch<='9')
		++shu;
		else if(ch==' ')
		++blank;
		else
		++other;
	}
	printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,shu,other);
	return 0;
}
	
