#include <stdio.h>
typedef struct t{
    int x;
    int y;
    int z;
}print;
#define p(t) \
    printf("%d, %d, %d \n",t.x, t.y, t.z);

int main()
{
    print l;
    l.x = 10;
    l.y = 20;
    l.z = 30;
    p(l);
}