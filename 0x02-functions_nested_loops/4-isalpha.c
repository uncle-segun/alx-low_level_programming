#include "main.h"
/**
 * Entry Point Author - Segun
 * Description - function that checks for
 *  alphabetic character
 *  if character 0 then negative english
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
