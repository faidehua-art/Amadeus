//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int re_sum(int *a, int n);
int re_mul(int *a, int n);
int main(void)
{
    int n = 5, a[5] = {0};
    int *b = a;
    while(b < &a[n]) {
        scanf("%d", b++);
    }
    printf("%d %d", re_sum(a, n), re_mul(a, n));

    return 0;
}

int re_sum(int *a, int n)
{
    int sum = 0, *b = a;
    while(b < &a[n]) {
        sum += *b++;
    }

    return sum;
}

int re_mul(int *a, int n)
{
    int mul = 1, *b = a;
    while(b < &a[n]) {
        mul *= *b++;
    }

    return mul;
}
