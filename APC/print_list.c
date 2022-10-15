#include "main.h"

//Define the Print function
void print_list(Dlist *head, int flag)
{
	Dlist *temp = head;
	//Print from head to tail
	if (head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("Elements from head are: ");
		//Traverse till end
		while (temp)
		{
			if (flag == 1)
			{
				printf("-%04d ",temp ->data);
			}
			else
			{
				printf("%04d -> ",temp->data);
			}
			temp = temp ->next;
		}
		printf("\n");
	}
}
