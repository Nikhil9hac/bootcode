#include <stdio.h>
int fin(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fin(num - 1) + fin(num - 2);
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Hi welcome to fibonacci number series\n");
    printf("Enter your nth terms to find number in fibonacci series\n", num);
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fin(i));
    }
    return 0;
}
