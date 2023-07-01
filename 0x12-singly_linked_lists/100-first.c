#include "lists.h"
#include <stdio.h>

/**
 * print_words - prints words
 * Return:0
 */
void print_words(void) __attribute__((constructor));
void print_words(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
