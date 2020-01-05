#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,j;
    printf("Enter your number to get table of it\n");
      scanf("%d",&a);
    printf("Enter your number where you want to get table\n");
    scanf("%d",&j);
    for (int i = 1 ; i <=j; i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}
