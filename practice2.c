#include <stdio.h>

int main()
{
    int i, fact = 1;

    for(i = 1; i <= 50; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
