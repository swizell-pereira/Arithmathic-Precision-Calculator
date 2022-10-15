#include "main.h"

void multiplication(Dlist **tail1, Dlist **tail2, Dlist **headR, Dlist **tailR)
{
	//Check for list empty
	if (*tail1 == NULL || *tail2 == NULL)
	{
		return; 
	}

	//Declare the temporary variables
	Dlist *temp1 = *tail1, *temp2 = *tail2;
	unsigned int num1 = 0, num2 = 0, num = 0;
	int carry = 0, count = 0;

	//Check untill end of lists
	while(temp1 || temp2)
	{
		if (temp1)
		{
			num1 = num1 + temp1 -> data;
		}
			temp1 = temp1 -> prev;

		if (temp2)
		{
			num2 = num2 +temp2 -> data;
		}
			temp2 = temp2 -> prev;

	num = num1 * num2;
	carry = num / 10000;
	num = num % 10000;
	insert_first(headR, tailR, num);
	if (carry != 0)
	{
	    insert_first(headR, tailR, carry);
	}
	}
}
