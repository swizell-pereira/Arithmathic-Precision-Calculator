#include "main.h"

//Define addition function
void addition(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR, Dlist **tailR)
{
	//Check for list empty
	if ((*head1 == NULL) && (*head2 == NULL))
	{
		return;
	}
	//Take Temporary pointer
	Dlist *temp1 = *tail1;
	Dlist *temp2 = *tail2;
	data_t sum, carry = 0;

	//Traverse till null
	while (temp1)
	{
		//Add the elements
		sum = temp1 ->data + temp2 ->data + carry;
		carry = sum / 10000;
		sum = sum % 10000;
		//Call insert function to insert the result
		insert_first(headR, tailR, sum);
		//Update the temp pointer
		temp1 = temp1 ->prev;
		temp2 = temp2 ->prev;
	}
	//Insert the carry to linked list
	if (carry)
	{
		insert_first(headR, tailR, carry);
	}
}
