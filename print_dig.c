#include "main.h"

int print_dec(int d)
{
    int i, temp, new_d, numDigits = 0;
    int* digits = NULL;

    if (d < 0)
        new_d = -d;
    else if (d == 0)
    {
        _putchar('0');
        return (1);
    }
    else
        new_d = d;

    temp = new_d;

    while (temp != 0) 
    {
        numDigits++;
        temp /= 10;
    }

    digits = malloc(numDigits * sizeof(int));
    if (digits == NULL) 
        return 1;

    temp = new_d;
    for (i = numDigits - 1; i >= 0; i--) 
    {
        digits[i] = temp % 10;
        temp /= 10;
    }

    if (d < 0)
        _putchar('-');

    for (i = 0; i < numDigits; i++) 
    {
        _putchar(digits[i] + '0');
    }

    if (d < 0)
        numDigits++;

    free(digits);
    
    return (numDigits);
}
