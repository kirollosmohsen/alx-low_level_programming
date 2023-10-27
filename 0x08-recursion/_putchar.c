#include <unistd.h>
/**
 * putchar - writes the character c to stdout 8c: The character to print
* Return: On success 1.
*@n error,-1 is returned, and ermo is set appropriately.
*/
int _putchar (char c)
{
return (write (1, &c, 1));
}
