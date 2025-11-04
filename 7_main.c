//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

void reverse(int *a, int n);
int main(void)
{
    int n = 5;
    int a[n], *b = a;

    while(b < &a[n]) {
        scanf("%d", b++);
    }

    reverse(a, n);

    b = a;
    while(b < &a[n]) {
        if(b > a) {
            printf(" ");
        }
        printf("%d", *b++);
    }
}

void reverse(int *a, int n)
{
    int *b = a;
    while(b < &a[n/2]) {
        int temp = *b;
        *b = a[&a[n-1]-b];
        a[&a[n-1]-b] = temp;
        b++;
    }
}
