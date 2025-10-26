//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main()
{
    int a = 0;
    int i = 100;
    while( i < 1000) {
        int j,k,l,sum = 0;
        j = i % 10;
        k = i / 10 % 10;
        l = i / 100;
        sum = j*j*j + k*k*k + l*l*l;
        if(sum == i) {
            if(a == 1){
                printf(" ");
            }
            printf("%d", i);
            a = 1;
        }
        i++;
    }

    return 0;
}
