#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>
char text[100];
int result[100];
int count = 0;
int getNi(int e, int n)//求逆
{
	int d;
	for (d = 0; d < n; d++) {
		if (e * d % n == 1)
			return d;
	}
}
int Gcd(int a, int b)//求最大公因数
{
	if (a % b == 0)
		return b;
	else
	return Gcd(b, a % b);
}
int getrand(int p,int q){//产生随机数e
	int m=(p-1)*(q-1);
	int e,c;
	while (1 ) {
		srand((unsigned)time(NULL));
		e = rand() % m;
		c = Gcd(e, m);
		if (c == 1)
			break;
	}
	return e;
	}
	
//加密
void Encode(int e,int n) {
	printf("请输入明文：");
	int c = getchar();
	while (1) {
		if (c == '\n')break;
		text[count] = c;
		count++;
		c = getchar();
	}
	int flag = 1;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < e; j++) {
			flag = flag * (int)text[i] % n;
		}
		result[i] = flag;
		flag = 1;
	}
	printf("\n加密密文为：\n");
	for (int i = 0; i < count; i++) {
		printf("%d", result[i]);
	}
	
}
//解密
void Decode(int d, int n){
	int flag = 1;
	int m[100];
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < d; j++) {
			flag = flag * result[i] % n;
		}
		m[i] = flag;
		flag = 1;
	}
	printf("\n解密明文为：\n");
	for (int i = 0; i <count; i++)
		printf("%c", m[i]);
}
int main(){
   int p,q,n;
   printf("请输入两个素数p q(要求p q的乘积要大于127)：");//ASCII码最大为127
   scanf("%d %d",&p,&q);
   n=p*q;
   int m = (p - 1) * (q - 1);
   printf("n=%d",n);
   int e;
   e = getrand(p, q);
   printf("\n公钥e=%d", e);
   int d;
   d= getNi(e, m);
   printf("\n私钥d=%d",d);
   int func=0;
   while (func != 3) {
	   printf("\n------------------------------------------");
	   printf("\n请选择功能：\n");
	   printf("1、加密\n");
	   printf("2、解密\n");
	   printf("3、退出\n");
	   printf("------------------------------------------\n");
	   scanf("%d", &func);
	   getchar();
	   if (func == 1) {
		   Encode(e, n);
	   }
	   else if (func == 2) {
		   Decode(d, n);
	   }
	   else
		   return 0;
   }
   return 0;
}
