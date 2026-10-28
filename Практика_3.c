#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void homework(void)
{
    float area;
    int people;

    puts("Домашнее задание, вариант 27. Введите площадь территории и число жителей:");
    scanf("%f %d", &area, &people);
    printf("Плотность населения: %.2f человек на единицу площади\n", people / area);
}

int main(void)
{
    homework();
    return 0;
}
