#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to the head of a linked list
 * @str: string to add to the new node
 *
 * Return: NULL if function fails, otherwise - the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	char *dup
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}	
