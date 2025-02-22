#include <stdio.h>

void mathsAdditon(float num1, float num2)
{
    float sum = 0;
    sum = num1 + num2;
    printf("%f", sum);
}

void mathsSubtraction(float num1, float num2)
{
    float total = 0;
    total = num1 - num2;
    printf("%f", total);
}

void mathMultiplication(float num1, float num2)
{
    float total = 0;
    total = num1 * num2;
    printf("%f", total);
}

void mathDivision(float num1, float num2)
{
    float total = 0;
    total = num1 / num2;
    printf("%f", total);
}

int main()
{
    float num1, num2;
    int user;
    printf("Enter 1st number for mathematics operation\n");
    scanf("%f", &num1);

    printf("Enter 2nd number for mathematics operation\n");
    scanf("%f", &num2);

    printf("1. addition \n2.subtraction \n3.multiplication \n4.division \n");
    scanf("%d", &user);

    switch (user)
    {
    case 1:
        mathsAdditon(num1, num2);
        break;
    case 2:
        mathsSubtraction(num1, num2);
        break;
    case 3:
        mathMultiplication(num1, num2);
        break;
    case 4:
        mathDivision(num1, num2);
        break;
    }
}