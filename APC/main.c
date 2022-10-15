#include "main.h"

//Start of main function
int main(int argc, char *argv[])
{
	//Declare the variable
	Dlist *head1 = NULL, *head2 = NULL, *tail1 = NULL, *tail2 = NULL, *headR = NULL, *tailR = NULL;
	char string[100], string1[50], string2[50], operator;
	int sum, l1, l2, flag = 0;

	//Check for Command line input
	if (argv[1] == NULL)
	{
		//Prompt the user to input the string and read it
		printf("Invalid input...Give input at Command Line\n");
		return 0;
	}
	//Call the function to extrac the operator
	extract_string(argv[1], string1, string2, &operator);
	
	//Validate the inout
	if (operator == '\0')
	{
		printf("Invalid Input...operator\n");
		return 0;
	}
	if (string2 == '\0')
	{
		printf("Invalid input...Operand is missinf\n");
		return 0;
	}
	//Calculate the length of two string
	l1 = strlen(string1);
	l2 = strlen(string2);

	printf("String1:%s string2:%s op:%c\n", string1, string2, operator);
	//Call the padding function to make equla
	padding_equal(string1, string2);

	//Call the function to convert string to integer and store it to linked list
	convert_int(string1, &head1, &tail1);
	
	printf("linked list 1 to represent operand 1\n");
	//Call the function to print the list
	print_list(head1, flag);

	//Call the function to convert string to interger and store to the linked list
	convert_int(string2, &head2, &tail2);
	
	printf("linked list 2 to represent operand 2\n");
	//Call the function to print the list
	print_list(head2, flag);
	
	switch (operator)
	{
		case '+':
			//Call the function to perform addition
			addition(&head1, &tail1, &head2, &tail2, &headR, &tailR);
			//Print the result
			printf("Addition linked list is: \n");
			print_list(headR, flag);
			break;
		case '-':
			//Call the function to perform substraction
			if (l1 >= l2)
			{
				substraction(&head1, &tail1, &head2, &tail2, &headR, &tailR);
			}
			else if (l1 < l2)
			{
				substraction(&head2, &tail2, &head1, &tail1, &headR, &tailR);
				flag = 1;
			}
			
			//Print the result
			printf("Substraction linked list is: \n");
			print_list(headR, flag);
			break;
		case '*':
			//Call the function to perform multiplication
			multiplication(&tail1, &tail2, &headR, &tailR);
			//Print the result
			print_list(headR, flag);
			break;
		case '/':
			//Call the function to perform division
			break;
		default:
			printf("Invalid operaotr...try again\n");
			break;
	}
}
