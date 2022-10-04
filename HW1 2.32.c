#include <stdio.h>

int main()
{
    float hei, wei,sqrhei,BMI;
    printf("input hei:(meter)\n");
    scanf_s("%f",&hei);
    printf("input wei:(kilogram)\n");
    scanf_s("%f", &wei);
    sqrhei = hei * hei;
    BMI = wei / sqrhei;
    printf("%4.2f\n",BMI);
    if (BMI<18.5)
    {
        printf("underweight");
    }
    else if (18.5<=BMI && BMI<=24.9)
    {
        printf("normal");
    }
    else if (25<=BMI && BMI<=29.9)
    {
        printf("overweight");
    }
    else
    {
        printf("obese");
    }
}

