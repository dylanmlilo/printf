#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * 
 * @s: the string to be measured
 * 
 * Return: the length of the string
*/

int _strlen(const char *s)
{
    size_t len = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
        len++;
    }
    return (len);
}

/**
 * _putchar - function that prints a character to stdout
 * 
 * @c: the character to print
 * 
 * Return: 1
*/

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

/**
 * _puts - function that prints a string to stdout
 * 
 * @str: the string to be printed
 * 
 * Return: the length of the string
*/

int _puts(const char *str)
{
    write(1, str, _strlen(str));
    return _strlen(str);
}
