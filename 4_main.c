//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int mul(int a, int b);
int main(void)
{
    int sum = 0;
    for(int i = 1; i < 6; i++) {
        sum += mul(i, 2);
    }

    printf("%d", sum);

    return 0;
}

int mul(int a, int b)
{
    int sum = 1;
    for(int i = 0; i < b; i++) {
        sum *= a;
    }

    return sum;
}
