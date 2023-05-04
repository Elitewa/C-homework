#include<stdio.h>
#define N 10
int search(int list[],int n,int x)
{
    int i;
    for(i = 0; i < n; i++)
        if(list[i] == x)
            return i;
    return -1;
}
int main()
{
	int a[N], i, m, x, n;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Input x:");
	scanf("%d",&x);
	m=search(a,n,x);
	if(m== -1)
		printf("Not found");
	else
		printf("index = %d",m);
	return 0;
}
