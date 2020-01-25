#include<stdio.h>
int main(int argc, char const *argv[])
{
    float temp;
    printf("Displaying a suitable message according to temperature\n");
    printf("Enter your temperature\n");
    scanf("%f",&temp);
    if (temp<0)
    {
        printf("Freezing weather");
    }
    else if (temp<10)
       {
        printf("Very cold weather");
    }
    else if (temp<20)
    {
        printf("Cold weather");
    }
    else if (temp<30)
    {
        printf("Normal in temp");
    }
    else if (temp<40)
    {
        printf("its hot");
    }
    else if (temp>=40)
    {
        printf("Its very hot");
    }
    
    return 0;
}
