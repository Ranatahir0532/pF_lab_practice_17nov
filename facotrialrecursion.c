#include <stdio.h>
int factorial(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return num * factorial(num - 1);
}
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d", &num);
    printf("%d", factorial(num));
}