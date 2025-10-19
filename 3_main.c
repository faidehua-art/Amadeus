//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int i,j;
    char k;

    scanf("%d %d %c",&i,&j,&k);

    if(k=='+') {
        printf("%d",i+j);
    }else if(k=='-') {
        printf("%d",i-j);
    }else if(k=='*') {
        printf("%d",i*j);
    }else if(k=='/') {
        printf("%d",i/j);
    }

    return 0;
}
