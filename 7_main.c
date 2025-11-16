//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b);
void bobble(int *a);

int main(void)
{
    int a[10] = {0}, *p = a;
    
    while(p < &a[10]) {
        scanf("%d", p++);
    }

    bobble(a);

    for(int i = 0; i < 10; i ++) {
        if(i > 0)
            printf(" ");
        printf("%d", a[i]);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bobble(int *a)
{
    bool n = true;
    while(n){
        n = false;
        int *p = a;
        while(p < &a[9]) {
            if(*p > *(p+1)) {
                swap(p, p+1);
                n = true;
            }
            p++;
        }
    }
}
