/* Идёт k день года. Определить, номер дня недели. Предполагаем, что 1 января выпало на среду. Дни недели нумеруем следующим образом:
0 -- воскресенье
1 -- понедельник
2 -- вторник
3 -- среда
4 -- четверг
5 -- пятница
6 -- суббота
Входные данные:
Целое число k, 1 ≤ k ≤ 365.

Выходные данные:
Одно целое число -- номер дня недели. */

#include <stdio.h>

int main ()
{
    int k, Kplus2, WeekDay;
    scanf ("%i", &k);
    
    Kplus2 = k + 2;
    if (Kplus2 < 7) {
        WeekDay = Kplus2;
        printf ("%i", WeekDay);
        } else {
            WeekDay = Kplus2 % 7;
            if (Kplus2 % 7 > 0) {
                printf ("%i", WeekDay);
                } else {
                    printf ("%i", WeekDay);
                    }
            }
    return 0;
}
