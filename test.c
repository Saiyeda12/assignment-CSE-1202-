#include <stdio.h>
#include "abc.h"

int main()
{
    int arr[] = {25, 10, 35, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum = %d\n", max(arr, n));
    printf("Minimum = %d\n", min(arr, n));

    printf("Prime Check (17) = %d\n", isPrime(17));

    printf("Odd Check (9) = %d\n", isOdd(9));
    printf("Even Check (8) = %d\n", isEven(8));

    printf("Digit Sum (12345) = %d\n", digitSum(12345));

    printf("Reverse Number (12345) = %d\n", reverseNumber(12345));

    printf("Factorial (5) = %lld\n", factorial(5));

    printf("GCD (12,18) = %d\n", gcd(12, 18));

    printf("LCM (12,18) = %d\n", lcm(12, 18));

    printf("Power (2^10) = %lld\n", power(2, 10));

    printf("Palindrome Check (121) = %d\n", isPalindrome(121));

    printf("Decimal to Binary (10) = %d\n", decimalToBinary(10));

    printf("Binary to Decimal (1010) = %d\n", binaryToDecimal(1010));

    printf("Decimal to Octal (100) = %d\n", decimalToOctal(100));

    printf("Decimal to Hexadecimal (255) = ");
    decimalToHexadecimal(255);

    return 0;
}
