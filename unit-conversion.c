#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float Kms_to_Miles = 0.621371;
    float Inches_to_foot = 0.083333;
    float Cms_to_Inches = 0.393701;
    float Pounds_to_Kgs = 0.453592;
    float Inches_to_Meters = 0.0254;
    float first,second;
    printf("Hello welcome to Digital Unit Conversion");
    while (1)
    {
        printf("Enter Your input\n .A to quit\n 1.Kms_to_Miles\n 2.Inches_to_foot\n 3.Cms_to_Inches\n 4.Pounds_to_Kgs\n 5. Inches_to_Meters\n ");
        scanf("%c", &input);
        switch (input)
        {
        case 'a':
            printf("Quitting conversion....");
            goto end;
            break;
        case '1':
        printf("Emter your quanitity in Terms of Kms\n");
        second= first*Kms_to_Miles;
        scanf("%f",&first);
        printf("%f Kms is equal to is %f Miles\n",first,second);
            break;
        case '2':
         printf("Emter your quanitity in Terms of Inches\n");
         scanf("%f",&first);
        second=first*Inches_to_foot;
         printf("%f Inches is equal is to %f foot\n",first,second);
            break;
        case '3':
         printf("Emter your quanitity in Terms of Cms\n");
         scanf("%f",&first);
        second=first*Cms_to_Inches;
         printf("%f Cms is equal to is %f Inches\n",first,second);
            break;
        case '4':
         printf("Emter your quanitity in Terms of pound\n");
         scanf("%f",&first);
        second=first*Pounds_to_Kgs;
         printf("%f Pounds is equal is to %f Kgs\n",first,second);
            break;
        case '5':
         printf("Emter your quanitity in Terms of Inches\n");
         scanf("%f",&first);
        second=first*Inches_to_Meters;
         printf("%f Inches is equal is to %f Meters\n",first,second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
