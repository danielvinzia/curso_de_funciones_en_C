#include <stdio.h>
// EJEMPLO 1
/*
void demo();

int main()
{
    demo();
    return 0;
}

void demo()
{
    int a, b, sum;
    a = 100;
    b = 200;
    sum = a + b;
    printf("the result is: %d", sum);
}
*/

// EJEMPLO 2
/*
int a, b;
void add(int a, int b);

int main()
{
    add(100, 200);
    return 0;
}

void add(int a, int b)
{
    int add;
    add = a + b;
    printf("the result is: %d", add);
}
*/

// EJEMPLO 3
int a, b;
int add(int a, int b);

int main()
{
    printf("the result is: %d", add(100, 200));
    return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}