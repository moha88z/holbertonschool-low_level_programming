#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - A helper function to compute the square root recursively
 * @n: The number to calculate the square root of
 * @guess: The current guess of the square root
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess > n)  /* If guess squared is greater than n, return -1 */
        return (-1);
    if (guess * guess == n)  /* If guess squared equals n, return the guess */
        return (guess);
    return (_sqrt_helper(n, guess + 1));  /* Try the next guess */
}
