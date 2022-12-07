#include "lists.h"

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int array[1000];
	int i = 0, j = 0;

	if (current == NULL)
		return (1);
	while (current)
	{
		array[i] = current->n;
		current = current->next;
		i++;
	}
	i--;

	while (i > j)
	{
		if (array[i] != array[j])
			return (0);
		i--;
		j++;
	}
	return (1);
}

