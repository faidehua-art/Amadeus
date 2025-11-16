//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a, b, *p = &a, *q = &b;

    scanf("%d %d", &a, &b);
    swap(p, q);

    printf("%d %d",a ,b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
