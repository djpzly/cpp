#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[10] = {0};
    printf("请输入数组（10）：\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        printf("a[%d] = %d ",i, a[i]); 
    }
    int tmp = 0;
    int i= 0;
    int j = sizeof(a)/sizeof(a[0]) - 1;
    printf("j = %d\n", j);
    printf("j = %d\n", j);
    printf("j = %d\n", j);
    printf("j = %d\n", j);
    while(i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d ", i, a[i]);
    }
}