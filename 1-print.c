#include "main.h"

/**
 * p_char - print a character.
 * @a: the character to be printed
 *
 * Return: length of the character (usually 1).
 */

int p_char(char a)
{
	return (write(1, &a, 1));
}

/**
 * p_string - A function to print a whole string.
 * @str: the the string
 *
 * Return: length of a string.
 */

int p_string(char *str)
{
	return (write(1, str, strlen(str)));
}

/**
* num_len - function
*@n: int
*Return: Always(0)
*/

int num_len(int n)
{
int len = 0;
while (n / 10 != 0)
{
len ++;
n /= 10;
}
return (len);
}

/**
 * SpecFunc - A function to detect which specifier we should use.
 * @a: the specifier
 * @args: the arguments
 *
 * Return: the length of args.
 */
int SpecFunc(char a, va_list args)
{
	int len = 0;
	char *str;

	if (a == 'c')
		len += p_char(va_arg(args, int));
	else if (a == 's')
	{
		str = va_arg(args, char *);
		len += p_string(STRING);
	}
	else if (a == 'i' || a == 'd')
		len += num_len(va_arg(args, int));
else if (a == '%')
{
len += p_char('%');
}
	else
	{
		len += p_char('%');
		len += p_char(a);
	}
	return (len);
}
