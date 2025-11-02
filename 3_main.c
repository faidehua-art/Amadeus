//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

void swap(int *a, int *b);
void bubbleSort(int *a, int n);

int main(void)
{
    int n = 10, a[n], *b = a;

    while(b < &a[n]) {
        scanf("%d", b++);
    }


    bubbleSort(a, n);

    b = a;
    while(b < &a[n]) {
        if(b > a) {
            printf(" ");
        }
        printf("%d", *b++);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int stemp;
    stemp = *a;
    *a = *b;
    *b = stemp;
}

void bubbleSort(int *a, int n)
{
    int *c, swapped = 1;
    while(swapped == 1) {
        swapped = 0;
        c = a;
        while(c < &a[n - 1]) {
            if(*c > *(c + 1)) {
                swap(c, c + 1);
                swapped = 1;
            }
            c++;
        }
    }
}
