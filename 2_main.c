//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main(void)
{
    int grade=0;
    scanf("%d",&grade);

    if(grade>89 && grade<101) {
        printf("A");
    }else if(grade>79 && grade<90) {
        printf("B");
    }else if(grade>69 && grade<80) {
        printf("C");
    }else if(grade>59 && grade<70) {
        printf("D");
    }else if(grade<60) {
        printf("E");
    }

    return 0;
}
