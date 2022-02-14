#include <stdio.h>
// EJEMPLO 1
/*
int power(int base, int n);

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("n = %d resultado de la potencia = %d\n", i, power(2, i));
    }
    return 0;
}

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0 ; n--)
    {
        p = p * base;
    }
    return p;
}
*/
int power(int base, int n);

int main()
{
    int n;
    n = 12;
    
    printf("n = %d el resultado de la potencia = %d\n", n, power(2, n));
    
    printf("el valor del exponente n original sigue siendo: %d", n);
    
    return 0;
}

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; n--)
    {
        p = p * base;
        printf("el valor temporal de n es: %d\n", n);
    }
    return p;
}