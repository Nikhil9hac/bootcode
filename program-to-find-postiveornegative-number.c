#include<stdio.h>
int main(int argc, char const *argv[])
{ int a;
printf("This program is used to find whether the number is positive or negative\n");
    printf("Enter your number\n");
    scanf("%d",&a);
    if (a>0)    
    {
       printf("This is Positive number\n");
    }
    else if (a<0)
    {
        printf("This is Negative number\n");
    }
    
   else
   {
      printf("Wrong input\n");
   }
   printf("Thank you for using");
return 0;
}

