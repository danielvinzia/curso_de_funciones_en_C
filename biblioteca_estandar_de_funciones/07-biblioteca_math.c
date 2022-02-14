#include <stdio.h>
#include <math.h>

int x;
float result;
int main()
{
    printf("ingrese el valor de x: ");
    scanf("%d", &x);
    result = cos(x);
    printf("el valor ingresado es: %d \n", x);
    printf("el valor del coseno de X es: %f", result);
    return 0;
}
