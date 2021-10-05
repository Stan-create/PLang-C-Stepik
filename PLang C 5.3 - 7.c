/* Перевод из какой-либо системы счисления с основанием k в десятичную осуществляется аналогично тому, как вы делали в прошлом задании. 
Только вместо степеней двойки нужно использовать степени числа k. 
Напишите программу для перевода числа из системы счисления с основанием kk в систему счисления с основанием 10. */

#include <stdio.h>

int main ()
{
    int k, number0, i;
    double number1, number2, number3, number4, result;
    scanf("%i %i", &k, &number0);
    
    number1 = number0 % 10;
    number2 = number0 / 10 % 10;
    number3 = number0 / 100 % 10;
    number4 = number0 / 1000 % 10;
    
    number1 = number1 * 1;
    number2 = number2 * k;
    number3 = number3 * (k*k);
    number4 = number4 * (k*k*k);
    
    result = number1 + number2 + number3 + number4;
    
    printf("%.0lf", result);
    return 0;
}
