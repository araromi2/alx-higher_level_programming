#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to the head of the list
 * @number: number to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->n = number;

	if (!*head || (*head)->n >= new_node->n)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current->next && current->next->n < new_node->n)
		current = current->next;

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

