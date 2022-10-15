#include "main.h"

//Define the function
void padding_equal(char *string1, char *string2)
{
	//Declare the variable
	int diff, i;
	//After making equal adding extra zeros for 
	if (strlen(string1) > strlen(string2))
	{
		diff = strlen(string1) - strlen(string2);
		for (i = diff; i > 0; i--)
		{
			char str[100] = "0";
			//Pad zeros to string2
			strcat(str, string2);
			strcpy(string2, str);
		}
	}
	else if (strlen(string1) < strlen(string2))
	{
		diff = strlen(string2) - strlen(string1);
		for (i = diff; i > 0; i--)
		{
			char str[100] = "0";
			//Pad zeros to string1
			strcat(str, string1);
			strcpy(string1, str);
		}
	}
	
		
}
