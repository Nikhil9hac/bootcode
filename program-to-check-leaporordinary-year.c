#include<stdio.h>
int main(int argc, char const *argv[])
{ 
    int a;
    printf("This program is used to find whether year is leap or ordinary\n");
    printf("Enter your year\n");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("This is Leap year\n");
    }
    else
    {
        printf("This is Ordinary year\n");
    }
    printf("Thank you for using");
    return 0;
}
