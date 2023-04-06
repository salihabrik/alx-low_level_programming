#include "main.h"
/**
 * _sqrt_helper - auxiliary function to calculate square root recursively
 * @n: the number to calculate the square root of
 * @min: the minimum possible value of the square root
 * @max: the maximum possible value of the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int min, int max)
{
    if (min > max)
        return (-1);

    int mid = (min + max) / 2;
    int mid_squared = mid * mid;

    if (mid_squared == n)
        return (mid);
    else if (mid_squared < n)
        return (_sqrt_helper(n, mid + 1, max));
    else
        return (_sqrt_helper(n, min, mid - 1));
}

/**
 * _sqrt_recursion - calculate the square root of a number using recursion
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (_sqrt_helper(n, 0, n));
}

