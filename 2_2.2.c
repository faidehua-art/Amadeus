//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main()
{
    int cnt = 0;
    for(int i = 100; i < 1000; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                break;
            }else if(i/2 < j) {
                if(cnt > 0) {
                    printf(" ");
                }
                printf("%d", i);
                cnt = 1;
            }
        }
    }

    return 0;
}
