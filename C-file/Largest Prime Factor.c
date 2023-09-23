#include <stdio.h>
#include <stdbool.h>

int isFactor(int value, int valFactor[])
{
    int count = 0;
    for (int i=2; i<=value; i++)
    {
        if (value%i == 0)
        {
            valFactor[count++] = i;
            value /= i;
        }

    }
    return count;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i=2; i*i<=num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int findLargestPrimeFactor ( int factor[], int factorCount)
{
    int largestPrimeFactor = 0;
    int newIndex = 0;

    for (int i=0; i<factorCount; i++)
    {
        if(isPrime(factor[i]) && factor[i] > largestPrimeFactor)
        {
            largestPrimeFactor = factor[i];
        }
    }

    for (int i=0; i<=factorCount; i++)
    {

    }
    return largestPrimeFactor;
}

int main (void)
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    int primeFactors [100];
    int factorCount = isFactor(num, primeFactors);

    if (factorCount == 0)
    {
        printf("%d is Prime Number itself. ", num);
    }
    else
    {
        printf("The prime factors of %d are: ", num);
        for (int i=0; i<=factorCount; i++)
        {
            if (isPrime(primeFactors[i]))
            {
                printf(" %d", primeFactors[i]);
            }
        }
    }

    int largestPrimeNumber = findLargestPrimeFactor(primeFactors, factorCount);
    printf("\nThe largest prime factor of %d is: %d", num, largestPrimeNumber);
    printf("\n\n");
    return 0;
}
