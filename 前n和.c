#include<stdio.h>
void main()
{
float a=2,t,b=1,sum=0;
int n=0,num=1;
printf("Input n: ");
scanf("%d",&n);
while(num<=n)
{
sum=sum+a/b;
t=b;
b=a;
a=t+b;
num++;
}
printf("s=%.2lf",sum);

}
