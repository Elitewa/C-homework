#include<stdio.h>
#include <windows.h>
#include<tchar.h>
int main()
{
    system("color F4");    
    double x,y,a;
    for(y=1.5;y>-1.5;y-=0.1214)  
     {   for(x=-1.5;x<1.5;x+=0.05)
        {
            a=x*x+y*y-1;
            if(a*a*a-x*x*y*y*y<=0)    
              
			  {  printf("*");
                Sleep(4);     
               }
            else
                   printf(" ");
        }
        printf("\n");
    }
    printf("½ù×Óçü ½ù×Óçü ½ù×Óçü ½ù×Óçü");
    return 0;
}
