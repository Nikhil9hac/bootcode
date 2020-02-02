#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter your first angle:");
    scanf("%d",&a);
     printf("Enter your second angle:");
    scanf("%d",&b);
     printf("Enter your third angle:");
    scanf("%d",&c);
    if (a+b+c==180)
    {
        printf("The triangle can formed");
    }
    else
    {
        printf("The triangle cannot formed");
    }
    
    return 0;
}
