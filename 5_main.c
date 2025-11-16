//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

void front(int *ptr_arr, int len);

int main(void)
{
    int len = 5, a[len], *p = a;

    while(p < &a[len]) {
        scanf("%d", p++);
    }

    p = &a[len - 1];
    front(p, len);

    for(int i = 0; i < 5; i++) {
        if(i > 0)
            printf(" ");
        printf("%d", a[i]);
    }

    return 0;
}

void front(int *ptr_arr, int len)
{
    for(int i = 0; i < len - 1; i++) {
        *ptr_arr = *(ptr_arr - 1);
        ptr_arr--;
    }
    *ptr_arr = 0;
}
