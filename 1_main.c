//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a[3][3];
    int *b = &a[0][0];

    while(b <= &a[2][2]) {
        scanf("%d", &*b++);
    }

    for(int i = 0; i < 3; i++) {
        if(i > 0) {
            printf("\n");
        }
        for(int j = 0; j < 3; j++) {
            if(j  > 0)
                printf(" ");
            printf("%d", a[i][j]);
        }
    }

    return 0;
}
