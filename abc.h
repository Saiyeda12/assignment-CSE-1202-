#ifndef ABC_H
#define ABC_H

#include <stdio.h>

/* Maximum (Array) */
int max(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

/* Minimum (Array) */
int min(int arr[], int n)
{
    int min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

/* Prime Check */
int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

/* Odd Check */
int isOdd(int n)
{
    return (n % 2 != 0);
}

/* Even Check */
int isEven(int n)
{
    return (n % 2 == 0);
}

/* Digit Sum */
int digitSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

/* Reverse Number */
int reverseNumber(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev;
}

/* Factorial */
long long factorial(int n)
{
    long long fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

/* GCD */
int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

/* LCM */
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

/* Power */
long long power(int base, int exp)
{
    long long result = 1;

    for(int i = 1; i <= exp; i++)
        result *= base;

    return result;
}

/* Palindrome Check */
int isPalindrome(int n)
{
    return n == reverseNumber(n);
}

/* Decimal to Binary */
int decimalToBinary(int n)
{
    int binary = 0, place = 1;

    while(n > 0)
    {
        binary += (n % 2) * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}

/* Binary to Decimal */
int binaryToDecimal(int n)
{
    int decimal = 0, base = 1;

    while(n > 0)
    {
        decimal += (n % 10) * base;
        base *= 2;
        n /= 10;
    }

    return decimal;
}

/* Decimal to Octal */
int decimalToOctal(int n)
{
    int octal = 0, place = 1;

    while(n > 0)
    {
        octal += (n % 8) * place;
        place *= 10;
        n /= 8;
    }

    return octal;
}

/* Decimal to Hexadecimal */
void decimalToHexadecimal(int n)
{
    char hex[20];
    int i = 0;

    while(n > 0)
    {
        int rem = n % 16;

        if(rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A';

        n /= 16;
    }

    for(int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    printf("\n");
}

#endif
