//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a[5] = {0};
    for(int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        a[4] += a[i];
    }

    int already = 0;
    for(int i = 0; i < 5; i++) {
        if(already == 1) {
            printf(" ");
        }
        printf("%d", a[i]);
        already = 1;
    }

    return 0;
}
