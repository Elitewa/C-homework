#include<stdio.h>
#define N 100
void sort( int a[], int n )
{
    int i,j;
    int tem; 
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j + 1];
				a[j+1]=tem;
			}
		}
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[N]={0},i,n;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input array of %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	return 0;
}
