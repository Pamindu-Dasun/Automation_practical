#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}

int subs(int a, int b)
{

    return a - b;
}

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b){
    return a*b;
}

double power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
