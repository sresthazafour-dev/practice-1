#include <stdio.h>

int main()
{
    int i = 1;
    long long fact = 1;

    while (i <= 50)
    {
        fact = fact * i;
        i++;
    }

    printf("Result = %lld", fact);

    return 0;
}
