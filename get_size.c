#include "main.h"

/**
 * get_size-a function that check for the size
 * @format: argument pointer to the str
 * @i: the argument pointer to use
 *
 * Return: int type
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;
	return (size);
}
