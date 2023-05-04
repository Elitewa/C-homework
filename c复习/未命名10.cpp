#include<stdio.h>
int main()
{
    int n,i,a=1,c=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
        c+=a;
    }
printf("%d",c);
return 0;    
}
