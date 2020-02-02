#include<stdio.h>
int main(int argc, char const *argv[])
{
   float roll_number,p,c,m,cs,marks;
    float per;
    char user;
    printf("Enter your roll number: ");
    scanf("%f",&roll_number);
    printf("Enter your name: ");
    scanf("%s",&user);
    printf("Enter your Pyhsics marks\n");
    scanf("%f",&p);
    printf("Enter your Chemistry marks\n");
    scanf("%f",&c);
    printf("Enter your Math marks\n");
    scanf("%f",&m);
    printf("Enter your Computer marks\n");
    scanf("%f",&cs);
    marks=p+m+c+cs;
    printf("The total marks is %f\n",marks);
    per=marks*100/400;
    printf("The total percentage is %f",per);
    return 0;
}
