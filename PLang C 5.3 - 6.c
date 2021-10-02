/* Перевести число из двоичной системы в десятичную.
Входные данные:
Четырёхзначное двоичное число B.
Выходные данные:
Десятичное целое число, соответствующее двоичному числу B.*/

#include <stdio.h>

int main ()
{
    int binary, result; 
    double number1, number2, number3, number4;
    scanf("%i", &binary);
    
    number1 = binary % 10;
    number2 = binary / 10 % 10;
    number3 = binary / 100 % 10;
    number4 = binary / 1000 % 10;
    
    number1 = (int) number1 * 1;
    number2 = (int) number2 * 2;
    number3 = (int) number3 * (2*2);
    number4 = (int) number4 * (2*2*2);
    
    result = number1 + number2 + number3 + number4;
    
    printf("%i", result);
    return 0;
}
