#include <stdlib.h>
#include "lists.h"

/**
* free_list - used to free linked list data structure
* @head: list_t data structure to be freed
*/

void free_list(list_t *head)

{
	list_t *temp;

	while (head)

	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
