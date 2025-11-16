//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a[5] = {0}, *p = a;

    while(p < &a[5]) {
        scanf("%d", p++);
    }

    p = a;
    while(p < &a[5]) {
        *p++ *= 2;
    }

    for(int i = 0; i < 5; i++) {
        if(i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
}
