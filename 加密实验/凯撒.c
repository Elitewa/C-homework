#include<stdio.h>
#define maxn 80
#define m 26
int main() {
int i=0,n;
int a[maxn];

printf("请输入密文：");
while ((a[i] = getchar()) != '\n') {      //读入换行则表示读入字符表示结束
i++;
}
a[i + 1] = '\0';

printf("请输入偏移量：");
scanf("%d", &n);
if (n > m) {
n = n % 26;           //如果偏移量大于26，则需要对26取余（其实就是多走了一圈）
}

for (i = 0; a[i] != '\0'; i++) {
if (a[i] >= 'A' && a[i] <= 'Z') {
if ((a[i] - 'A' + n) < m) {           //如果字符加上偏移量后小于26，则字符直接加上偏移量
a[i] = a[i] + n;
}   
else {
a[i] = a[i] - (m - n);                //如果大于26，则可以使用26-偏移量，再使用字符减去刚才那个
}
}
}

for (i = 0; a[i] != '\0'; i++) {
if (a[i] >= 'a' && a[i] <= 'z') {
if ((a[i] - 'a' + n) < m) {            //同理
a[i] = a[i] + n;
}
else {
a[i] = a[i] - (m - n);
}
}
}

for (i = 0; a[i] != '\0'; i++) {        //按顺序输出
putchar(a[i]);
}return 0;
}
