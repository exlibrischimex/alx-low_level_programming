#include "main.h"

/**
 * _isalpha.c - Returns 1 if c is a letter. lowercase or uppercase
 *
 * @c: The int to print
 * Return: Always 0.
 */
int _isalpha(int c);

{

if ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'))
{
return (1);
}

else
{

return (0);
}

}
