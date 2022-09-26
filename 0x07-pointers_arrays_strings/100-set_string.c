#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer that points to source
 * @to: pointer that indicates destination
 */

void set_string(char **s, char *to)
{
	*s = to;
}
