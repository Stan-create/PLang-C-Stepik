/* Напишите программу для перевода температуры из градусов Фаренгейта в градусы Цельсия. */

#include <stdio.h>

int main ()
{
    int F;
    double C;
    scanf ("%i", &F);
    
    C = (F - 32) * (5.0/9.0);
    printf ("%.2lf", C);
    return 0;
}
