#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	int i,j,key;
	printf("输入明文：");
    for(i=0; i<100; i++){
        text[i] = getchar();
        if(text[i] == '\n'){
            text[i] = '\0';
            break;
        }
    }
    printf("输入密钥：");
    scanf("%d",&key);
    printf("加密：");
    for(j=0;j<i;j++){
        text[j] = text[j] ^ key;
    }
    puts(text);
    printf("解密：");
    for(j=0;j<i;j++){
        text[j] = text[j] ^ key;
    }
    puts(text);
    return 0;
}


 
