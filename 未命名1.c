#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()//随机数函数
{
    int m;
    int b[4];
    srand((unsigned int)time(NULL));
    int a=0;//判断是否满足条件
    while(a==0)
    {
 		m=rand();
        if(m>999&&m<10000)
        {
        	b[0]=m%10;
            b[1]=m/10%10;
            b[2]=m/10/10%10;
            b[3]=m/10/10/10%10;
            if(b[0]!=b[1]&&b[0]!=b[2]&&b[0]!=b[3]&&b[1]!=b[2]&&b[1]!=b[3]&&b[2]!=b[3])
            {
                a=1;
            }
         }
	}
	kongzhi(b);
}
void kongzhi(int b[4])
{
    int c=0;//计数，计已猜想了多少次
    int f;
    char s;
    while(c<15)
    {
    printf("请输入你猜想的数字：");
    scanf("%d",&f);
    if(f>9999||f<999)
        {
            printf("输入非法，重新输入!\n");
            printf("请输入你猜想的数字：");
            scanf("%d",&f);
 
        }
    else
    c++;
    int A=0,B=0;
    int h[4];
    h[0]=f%10;
    h[1]=f/10%10;
    h[2]=f/10/10%10;
    h[3]=f/10/10/10%10;
    int i=0;
    for(i=0;i<4;i++)
    {
        if(b[i]==h[i])
            A++;
        else
            B++;
    }
    if(A<4)
    printf("不正确,%dA%dB\n",A,B);
    else
        {printf("恭喜，猜对了！\n");
        break;}
    if(c==8)
       {
    printf("游戏结束\n");
    getchar();
    s=getchar();
    if(s=='1');
    else if(s=='0')
        break;
    else
        printf("输入非法，重新输入！\n");
       }
 
    }
}
