#include <stdio.h>

int signInverter (int num)
{
    int invertedNum = num * -1;

    return invertedNum;
}

int main (void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int invertedSign = signInverter(number);

    printf("%d", invertedSign);

    return 0;
    
}