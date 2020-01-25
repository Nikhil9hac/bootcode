#include<stdio.h>
int main(int argc, char const *argv[])
{ float perheight;
    printf("This program is used to categorised yhe height\n");
    printf("Enter your height\n");
    scanf("%f",&perheight);
    if (150>perheight)
    {
       printf("Dwarf height\n");
    }
    else if (150<perheight || 165>perheight)
    {
        printf("Average height");
    }
    else
    {
        printf("Tall");
    }
    
    return 0;
}
