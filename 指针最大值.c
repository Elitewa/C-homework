#include<stdio.h>
void  main()
{
	int a[3][4]={11,2,23,4,15,20,7,8,39,10,21,16};
	int (*p)[4]; //定义指向二维数组的指针
	int i,j,max;
	max=a[0][0];
	p=a;   //p指针赋初值
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	if( *(*(p+i)+j)>max)   
	max=*(*(p+i)+j);  
	printf("max=%d\n",max);
}
