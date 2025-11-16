//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a, *p = &a;

    scanf("%d", &a);

    *p += 10;
    printf("%d,%d", a, *p);

    return 0;
}
