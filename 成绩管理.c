#include<stdio.h>
int main()
{
	int n,i;
	float aver;
	struct xx
	{
		int h;
		int l;
		char x;
		float c[3];
	}stu[10];
	printf("Please input the number of student:");
	scanf("%d",&n);
	printf("Please input the information of student:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d %c %f %f %f",&stu[i].h,&stu[i].l,&stu[i].x,&stu[i].c[0],&stu[i].c[1],&stu[i].c[2]);
		
	}
	for(i=0;i<n;i++)
	{
		aver=(stu[i].c[0]+stu[i].c[1]+stu[i].c[2])/3;
		printf("%d %d %c %.1f %.1f %.1f %.1f\n",stu[i].h,stu[i].l,stu[i].x,stu[i].c[0],stu[i].c[1],stu[i].c[2],aver);
	}
	return 0;
}
