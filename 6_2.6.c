//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a[5] = {0};
    for(int i = 0; i < 5;) {
        int j;
        scanf("%d", &j);
        if(j % 2 == 0) {
            a[i] = j;
            i++;
        }
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
