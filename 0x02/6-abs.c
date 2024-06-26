/* 6-abs.c */
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute absolute value
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
