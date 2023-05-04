#include<stdio.h>
#include<string.h>	
int main()
{	
	int j,i;
	char str[6][10]={0},temp[10]={0};
	for (i=0;i<6;i++) 
	{
    	scanf("%s",str[i]);
    }
    for(i=0;i<6;i++)
	{	for (j=i;j<6-i-1;j++) 
		{
        	if(strcmp(str[i],str[j+1])>0)
			{
                strcpy(temp,str[i]);
                strcpy(str[i],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
	for(i=0;i<6;i++) 
	{
    	printf("%s\n\n",str[i]);
    }
return 0;
}
