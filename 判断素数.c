#include <stdio.h>
#include <math.h>//sqrt()函数包含在math头文件里面，所以需要加载这个math头文件
int main()
{
	int i;
	for (i = 101; i <= 200; i+=2)//生成101~200的奇数
	{
		int j;
		int flag = 1;//falg是标记变量。这里需要对它赋初值，否则一旦它在后面的if判断中变为0，就永恒为0了，所以要把它放在for循环内。
		for (j = 2; j <=sqrt(i)&&flag; j++)//生成2~根号i的除数
		{
			if (i% j == 0)//如果在这个期间，被整除了，则说明这个数不是素数
			{
				flag = 0;//能被2~根号i之间的数整除，就给标记变量赋值0，不被整除，则flag依然为1;当它等于1，则说明是素数，当它等于0，则说明它不是素数。

			}
		}
	if (flag==1)//判断部分
		{
			printf("%d ", i);
		}
	}
	return 0;
}
