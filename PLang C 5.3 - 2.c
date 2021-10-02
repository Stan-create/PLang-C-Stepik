/* Одноклеточная амёба каждые 33 часа делится на 22 клетки. Определить, сколько клеток будет через kk часов
Входные данные:
одно целое число kk
Выходные данные:
Целое число, равное количеству клеток амёбы через kk часов. */

#include <stdio.h>
#include <math.h>

int main ()
{
    int k, i;
    double amoeba;
    scanf ("%i", &k);
    
    amoeba = 1;
    for (i = 0; i < k; i = i + 3) {
        amoeba = amoeba * 2;
        }
    printf ("%.0lf", amoeba);
    return 0;
}
