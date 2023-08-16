#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name-prints name using pointer to function
 *@name:string to add
*@f:pointer to function
*Return: Nothing
*/
void print_name(char *name, void (*f) (char *))
{
	if (name == NULL)
	return;

	else
	{
		printf("%s\n", name);
	}
	f(name);
}
