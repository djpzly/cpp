#include <stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    int t = 0;

    for(int m = 0; m < 9; m++)
    {
        for(int n = 0; n < 9 - m -1; n++)
        {
            if(a[m] < a[n])
            {
                t = a[m];
                a[m] = a[n];
                a[n] = t;
            }
        }
    }
    for(int y = 0; y < 10; y++)
    {
        printf("%d\t", a[y]);
    }
}