#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* print_list - prints every  elements of the linked list
* @h: pointer to the list_t list to printing
* Return: the number of the printed nodes
*/

size_t print_list(const list_t *h)

{
	int i = 0, length = 0;

	const list_t *tp;

	tp = h;

	while (tp != NULL)

	{
		if (tp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			length = strlen(tp->str);
			printf("[%d] %s\n", length, tp->str);
		}
		tp = tp->next;
		i++;
	}

	return (i);
}
