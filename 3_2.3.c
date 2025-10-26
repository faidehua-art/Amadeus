//202411604104
//faidehua@gmail.com
//兰雄杰
#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    if(i == 2) {
        printf("密钥安全，密码设置成功");
    }else if(i == 1) {
        printf("密钥不安全，请重新输入");
    }else {
        j = 2;
        while(j < i) {
            if(i % j == 0) {
                printf("密钥不安全，请重新输入");
                break;
            }
            j++;
        }
        if(i == j) {
            printf("密钥安全，密码设置成功");
        }
    }

    return 0;
}
