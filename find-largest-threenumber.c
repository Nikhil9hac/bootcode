#include <stdio.h>
int main(int argc, char const *argv[])
{
     int a, b, c;
     printf("Hello\n");
     printf("Enter your input:\n");
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     if (a > b)
     {
          if (a > c)
          {
               printf("%d is the largest among three\n", a);
          }
          else
          {
               printf("%d is the largest among three\n", c);
          }
     }
     else if (b > c)
     {
          printf("%d is the largest among three\n", b);
     }
     else
     {
          printf("%d is the largest among three\n", c);
     }

     return 0;
}
