#include "main.h"
/**
 * sqrt_real - return natural square root of 
 * a number
 * @n: input number
 * @c: iterator
 * Return: square root 0r -1
 */
int sqrt_real(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_real(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_real(n, 0));
}
