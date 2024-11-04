#include <stdio.h>
#include <stdlib.h>

int nbrlen(int n)
{
    size_t i = 0; // Initialize i to 0

    if (n == -2147483648)
        return 11; // Handling the edge case for INT_MIN
    else if (n < 0)
    {
        i++;
        n = -n; // Negate n to make it positive
    }

    // Count the number of digits
    do {
        i++;
        n /= 10;
    } while (n > 0);

    return i; // Return the length of the number
}

char *ft_itoa(int n)
{
    char *tmp;
    size_t nlen;
    size_t i = 0; // Initialize i to 0
    size_t j;

    nlen = nbrlen(n);
    tmp = (char *)malloc(nlen + 1); // Allocate memory for the string
    if (!tmp)
        return NULL; // Return NULL if malloc fails

    if (n < 0)
    {
        tmp[0] = '-'; // Add negative sign
        i++;
        n = -n; // Make n positive
    }

    j = nlen - 1; // Set j to the last index to fill
    while (n > 0)
    {
        tmp[j] = (n % 10) + '0'; // Convert digit to character
        n /= 10;
        j--;    
    }

    // If the number was zero, handle that case
    if (i == 0 && nlen > 0)
        tmp[j] = '0'; // Add '0' for zero case

    tmp[nlen] = '\0'; // Null-terminate the string
    return tmp; // Return the converted string
}

int main() 
{
    int n = -1673458;

    printf("%d\n", nbrlen(n));
    char *result = ft_itoa(n);
    if (result) {
        printf("%s\n", result);
        free(result); // Free allocated memory
    }
    return 0;
}

