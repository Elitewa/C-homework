#include<stdio.h>  //By£∫’≈∫Ë≤©
#include<string.h>
int main()
{
	int i=0;
	char a[4]={0},c[]="END";
	while(i!=3)
	{
		printf("input:");
		scanf("%s",&a);
		if((strcmp(a,c))==0)
		{
			
			i++;

				if(i==3)
				{
					printf("Program terminated");
					break;
				}
				
		}
		if(i!=1&&i!=2&&i!=3)
		printf("echo:%s\n",a);
	}
return 0;
}
