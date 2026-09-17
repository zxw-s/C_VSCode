#include <stdio.h>

// C语言练习，熟悉VS Code：编辑、编译、运行、调试断点
int main(void)
{
    int a = 10;
    int b = 20;
    int sum;

    printf("==== VS Code C语言测试程序 ====\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    sum = a + b;
    printf("a + b = %d\n", sum);

    // 简单循环
    printf("\n循环输出：");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n程序结束\n");
    return 0;
}