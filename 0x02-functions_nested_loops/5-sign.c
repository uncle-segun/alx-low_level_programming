#include "main.h"
/**
 * Entry Point - Function That print Number sign
 * Description - This program will print number signs
 *
 * Return - either 1 or 0 or -1
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		 return (0);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{	
		_putchar('-');
		return  ('/');
	}
}
