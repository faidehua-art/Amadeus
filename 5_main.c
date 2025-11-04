//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int Sequence(int a1, int an, int step);
int main(void)
{
    printf("%d", Sequence(1, 100, 1));
}
int Sequence(int a1, int an, int step)
{
    int sum = 0;
    for(int i = a1; i <= an; i++) {
        sum += i;
    }

    return sum;
}
