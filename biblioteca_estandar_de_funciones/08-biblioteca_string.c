#include <stdio.h>
#include <string.h>
// EJEMPLO 1
/*

char string1[60];

int main()
{
    printf("Escribe una frase \n");
    gets(string1);

    strrev(string1);

    printf("el string al reves es: %s\n", string1);

    return 0;
}
*/

// EJEMPLO 2
/*
char string1[60];
char string2[60];

int main()
{
    printf("Escribe una frase \n");
    gets(string1);
    printf("Escribe otra frase para comparar \n");
    gets(string2);
    if (strcmp(string1, string2) == 0)
    {
        printf("ingresaste dos strings identicos\n");
    }
    else
    {
        printf("ingresaste dos strings distintos\n");
    }
    
    return 0;
}
*/

// EJEMPLO 3

char string1[60];
char string2[60];

int main()
{
    printf("Escribe una frase \n");
    gets(string1);
    printf("Escribe otra frase para comparar \n");
    gets(string2);
    if (strcmp(string1, string2) == 0)
    {
        printf("ingresaste dos strings identicos\n");
    }
    else
    {
        strcat(string1, string2);
        printf("ingresaste dos strings distintos, si los unimos el resultado es: %s \n", string1);
    }

    return 0;
}