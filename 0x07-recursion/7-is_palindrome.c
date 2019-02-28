#include "holberton.h"
#include <stdio.h>

/**
 * palindrome_size - it is a funtion to print
 * @s: pointer
 * Return: dependes on the recusion case
 */
int palindrome_size(char *s)
{
	int count = 1;

	if (*s != '\0')
		return (count + palindrome_size(s + 1));
	return (0);
}
/**
 * palindrome_com - it is a funtion to print
 * @s: pointer
 * @size: input
 * @i: input
 * Return: dependes on the recusion case
 */
int palindrome_com(char *s, int size, int i)
{
	if (i >= size)
		return (1);
	else if (s[i] == s[size])
		return (palindrome_com(s, size - 1, i + 1));
	return (0);
}
/**
 * is_palindrome - it is a funtion to print
 * @s: input
 * Return: dependes on the recusion case
 */
int is_palindrome(char *s)
{
	int size, palindrome;

	size = palindrome_size(s) - 1;
	palindrome = palindrome_com(s, size, 0);
	if (palindrome == 1)
		return (palindrome);
	return (0);
}
