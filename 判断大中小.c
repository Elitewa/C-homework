#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(b>c)
printf("Max=%d\nMin=%d\nMid=%d",a,c,b);
else
if(a>c)
printf("Max=%d\nMin=%d\nMid=%d",a,b,c);
else
printf("Max=%d\nMin=%d\nMid=%d",c,b,a);
}
else if(c>b)
printf("Max=%d\nMin=%d\nMid=%d",c,a,b);
else if(a>c)
printf("Max=%d\nMin=%d\nMid=%d",b,c,a);
else
printf("Max=%d\nMin=%d\nMid=%d",b,a,c);
return 0;
}
