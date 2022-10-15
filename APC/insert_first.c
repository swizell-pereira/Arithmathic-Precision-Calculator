#include "main.h"

//Define the function
int insert_first(Dlist **head, Dlist **tail, data_t data)
{
	//Create new node
	Dlist *new = malloc(sizeof(Dlist));
	//Validate memory creation
	if (new == NULL)
	{
		return FAILURE;
	}
	//Update the node values
	new ->data = data;
	new ->prev = NULL;
	new ->next = *head;
	//Condition to check if head is null
	if (*head == NULL)
	{
		*tail = new;
	}
	//Assign the new address
	if (new ->next != NULL)
	{
		(new ->next) ->prev = new;
	}
	*head = new;
	return SUCCESS;
}
