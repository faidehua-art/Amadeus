//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b+c && a+b>c && a+c>b) {
        printf("可以组成三角形");
    }else {
        printf("不能组成三角形");
    }

    return 0;
}
