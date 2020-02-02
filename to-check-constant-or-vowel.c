#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Enter your character\n");
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("This is vowel");
    }
    else
    {
        printf("This is alphabet");
    }
    
    return 0;
}
