#include "main.h"

//Define the function
void convert_int(char *string, Dlist **head, Dlist **tail)
{
	//Declare the variable
	int i, j, k, length, data;
	char temp[4];
	//Calculate the length
	length = strlen(string);
	
	//Condition to insert 4 data to linked list
	for (i = length; i > 0; i = i - 4) 
	{
			k = 0;
			//Store from lsb 
			j = i - 4; 
			while (j < i) 
			{
				if (j >= 0)
				{
					temp[k] = string[j];
				}
				else
				{
					temp[k] = 48;
				}
				k++;
				j++;
			}
			//Call the library function to convert to interger
			data = atoi(temp);
			//Call the function to Insert the number to linked list
			insert_first(head, tail, data);
	}
}
