#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if(x>=-10&&x<=4||x>=5&&x<=7||x>=8&&x<=12)
        {
		if(x<=4)
            {
                y=fabs(x-2);
                 printf("y=%.2lf",y);
            }
        if(x>=5&&x<=7)
            {
                y=x+10;
                printf("y=%.2lf",y);
            }
        if(x>=8)
            {    
                y=x*x*x*x;
                printf("y=%.2lf",y);
            }
         }
	else
        printf("No answer.");
    return 0;      
}
    
