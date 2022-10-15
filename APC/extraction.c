#include "main.h"

//Define the function
void extract_string(char *a, char *string1, char *string2, char *operator)
{
	//Declare the variable
	int i = 0, j = 0;
	
	//Condition to extrac operand-1 from the string
	while (isdigit(a[i]))
	{
		string1[j] = a[i];
		//printf("%c\n",string1[j]);
		i++;
		j++;
	}
	string1[j] = '\0';
	//printf("%s\n", string1);
	//Get the operator
	*operator = a[i++];
	//printf("%c\n", operator);
	int k = 0;
	//Condition to extrac the operand-2 from the string
	while (isdigit(a[i]))
	{
		string2[k] = a[i];
		k++;
		i++;
	}
	string2[k] = '\0';
	//printf("%s\n", string2);
}
