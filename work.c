#include <stdio.h>

int max(int x, int y)
{
    return x>y?x:y;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = max(10, 20);
    printf("%d\n", c);
    printf("hello world\n");
    return 0;   
}
