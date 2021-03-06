/* Сравнение чисел по модулю. Обычно мы сравниваем числа между собой напрямую. Но в математике и криптографии частенько используется сравнение по модулю целого числа k. 
Два числа сравнимы по модулю k, если равны их остатки от деления на k. Например, числа 3 и 9, сравнимы по модулю 6, а числа 25 и 13 сравнимы по модулю 3. 
Напишите программу, которая помогает сравнивать числа по модулю k.
Входные данные:
Три натуральных числа:
Первое число k - модуль, по которому необходимо сравнить числа. Второе и третье - числа, которые необходимо сравнить по модулю k
Выходные данные:
Два числа: остатки от деления на k. */

#include <stdio.h>

int main() 
{
    int k, val1, val2;
    int rem1, rem2;
    scanf("%i %i %i", &k, &val1, &val2);
    
    rem1 = val1 % k;
    rem2 = val2 % k;
    
    printf("%i %i", rem1, rem2);
    return 0;
}
