#include "main.h"
/**
* main - Entry Point
* Description - A Program that print _putchar
* Return : Alway (0) Suscess
*/
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;
	while (str[i] != '\0')
	{
	char c = str[i];
	_putchar(c);
	i++;
	}
	return (0);
}	
