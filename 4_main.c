//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

void up(int *a);

int main(void)
{
    int a[5] = {0}, *p = a;

    while(p < &a[5]) {
        scanf("%d", p++);
    }

    p = a;
    up(p);

    for(int i = 0; i < 5; i++) {
        if(i > 0) 
            printf(" ");
        printf("%d", a[i]);
    }

    return 0;
}

void up(int *a)
{
    for(int i = 0; i < 5; i++) {
        *a++ +=1;
    }
}
