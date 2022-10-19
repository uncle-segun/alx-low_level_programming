#include "main.h"
/**Entry Point - calculate absolute value of the number from zero
*Description - _abs absolute value
*Return: absolute value of input.
*/
int _abs(int i)

{
	if (i < 0)
		i = i * -1;
	return (i);
}
