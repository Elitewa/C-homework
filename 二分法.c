#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//已知的整形有序数组
    int x = 0;//x是要寻找的数
    int left = 0;//左下标
    int right = sizeof(arr) / sizeof(arr[0]) - 1;//数组右下标  
    scanf("%d", &x);
    while (left <= right)
    {
        int mid = left+(right-left)/2;//找到最中间的数
        if (x < arr[mid])
        {
            right = mid-1;
        }
        else if (x > arr[mid])
        {
            left = mid+1;
        }
        else
        {
            printf("找到了，下标是%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("没找到");
    }
 
    return 0;
}
