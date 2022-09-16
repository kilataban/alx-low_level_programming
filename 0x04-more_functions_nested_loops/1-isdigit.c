#include "main.h"

/**
* _isdigit - this function checks for a digit
* @c: this is the input variable
* Return (1) if digit, (0) if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
