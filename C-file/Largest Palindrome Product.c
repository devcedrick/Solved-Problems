#include <stdio.h>

int isPalindrome (int value)
{
    int origNum = value;
    int reversedNum = 0;

    if (value < 0)
    {
        return 1;
    }

    while (value > 0)
    {
        int remainder = value % 10;
        reversedNum = reversedNum * 10 + remainder;
        value /= 10;
    }
    return origNum == reversedNum;
}

int main (void)
{
    int largestPalindrome = 0;

    for (int i=100; i<1000; i++)
    {
        for (int j=100; j<1000; j++)
        {
            int product = i*j;

            if (isPalindrome(product) && product > largestPalindrome)
            {
                largestPalindrome = product;
            }
        }
    }

    printf("Largest Palindrome Product: %d", largestPalindrome);

    return 0;
}
