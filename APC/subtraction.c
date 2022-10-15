#include "main.h"

//Define the function
void substraction(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR, Dlist **tailR)
{
	//Check for list empty
	if ((*head1 == NULL) && (*head2 == NULL))
	{
		return;
	}
	//Take temporary pointer
	Dlist *temp1 = *tail1;
	Dlist *temp2 =*tail2;
	int c = 0, sub;
	
	//Traverse till end
	while (temp1 || temp2)
	{
		//Condition to check the both data is present
		if (temp1 != NULL && temp2 != NULL)
		{
			//If the 1st LL data is greater than 2nd LL data
			if ((temp1 -> data) + c >= temp2 -> data)
			{
				sub = (temp1 -> data) + c - (temp2 -> data);
				c = 0;
			}
			else
			{
				sub = (((temp1 -> data) + c + 10000) - (temp2 -> data));
				c = -1;
			}
		}
		//Insert the data to resultant linked list
		insert_first(headR, tailR, sub);
		//Move the pointer to previous node
		temp1 = temp1 -> prev;
		temp2 = temp2 ->prev;
	}
}
