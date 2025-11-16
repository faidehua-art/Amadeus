//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    arr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++) {
        scanf("%d", arr++);
    }

    arr -= 5;

    for(int i = 0; i < 5; i++) {
        if(i > 0)
            printf(" ");
        printf("%d", *arr++);
    }

    arr -= 5;
    free(arr);

    return 0;
}
