#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int remainder_by_4(int year);
int is_leap_year(int year);

int main(void)
{
    setlocale(LC_ALL,".UTF8");

    int year;
    int rem;
    int leap;

    printf(" Зад 1\n");
    printf("Введите год: ");
    if (scanf("%d", &year) != 1 || year <= 0)
    {
        printf("Ошибка: нужно ввести целое положительное число.\n");
        return 1;
    }

    
    rem = remainder_by_4(year);
    printf("Остаток от деления на 4: %d\n", rem);
    if (rem == 0)
        printf("год %d високосный\n", year);
    else
        printf("год %d не високосный\n", year);

    
    leap = is_leap_year(year);
    if (leap)
        printf("год %d високосный\n", year);
    else
        printf("год %d не високосный\n", year);


   
    double x;

    printf("\n Зад 2\n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    
    printf("F(%.2lf) = %.2lf\n", x, (x <= -3) ? 9.0 : (1.0 / (x * x + 1.0)));

    return 0;
}


int remainder_by_4(int year)
{
    return year % 4;
}


int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}