#include <stdio.h>
#include <time.h>
// EJEMPLO 1
/*
time_t seconds;

int main()
{
    seconds = time(NULL);
    printf("El numero de hotas desde EPOCH 1ro de Enero de 1970 a las 00:00 es: %ld \n", seconds/3600);
    return 0;
}
*/

// EJEMPLO 2
time_t begin, end;

int main()
{
    long i;
    long a = 0;
    long b = 1;
    begin = time(NULL);
    
    for (i = 0; i < 1500000000; i++)
    {
        a = a + b;
    }
    end = time(NULL);
    printf("El tiempo que duro nuestro FOR es: %f \n", difftime(end, begin));
    return 0;
}