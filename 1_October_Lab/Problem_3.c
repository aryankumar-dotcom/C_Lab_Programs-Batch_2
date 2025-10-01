#include <stdio.h>
int sumOfDigits(int n);

//main function
int main()
{
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
    result = sumOfDigits(number);
    printf("The sum of the digits of %d is: %d\n", number, result);

    return 0;
}

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    return (n % 10) + sumOfDigits(n / 10);
}