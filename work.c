#include <stdio.h>

//第2个版本
int max(int x, int y)
{
    return x>y?x:y;
}

//第3个版本
int add(int x, int y)
{
    return x+y;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = max(10, 20);
    int d = add(10, 20);
    printf("%d\n", c);
    printf("%d\n", d);
    //第1个版本
    printf("hello world\n");
    return 0;   
}
