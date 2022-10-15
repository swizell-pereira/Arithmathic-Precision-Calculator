#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef int data_t;
//Declare the structure
typedef struct node
{
	data_t data;
	struct node *next;
	struct node *prev;
}Dlist;

//Declare the macro
enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
};
//Declare the function
void extract_string(char *, char *, char *, char *);
void convert_int(char *string, Dlist **head, Dlist **tail);
int insert_first(Dlist **head, Dlist **tail, data_t data);
void padding_equal(char *, char *);
void print_list(Dlist *head, int flag);
void addition(Dlist **, Dlist **, Dlist **, Dlist **, Dlist **, Dlist **);
void substraction(Dlist **, Dlist **, Dlist **, Dlist **, Dlist **, Dlist **);
void multiplication(Dlist **, Dlist **, Dlist **, Dlist **);
int delete_list( Dlist **head, Dlist **tail);
void division(Dlist **head1, Dlist **head2, Dlist **tail1, Dlist *    *tail2,Dlist **headR, Dlist **tailR, char operator);
int check_greater(Dlist **head1, Dlist **head2, Dlist tail1, Dlist     tail2);


#endif
