#include <stdio.h>
#define MIN 60
int main(void)
{
    int second,min,left;
    printf("请输入你要转换的秒数:\n");
    scanf_s("%d\n",&second);

    min=second/MIN;
    left=second%MIN;

    printf("结果：%d分%d秒",min,left);

    return 0;
}