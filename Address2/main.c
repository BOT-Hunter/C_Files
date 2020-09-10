#include <stdio.h>
// C program for chain of pointer

int main()
{
	int var = 10;

	// Pointer level-1
	// Declaring pointer to variable var
	int* ptr1;

	// Pointer level-2
	// Declaring pointer to pointer variable *ptr1
	int** ptr2;

	// Pointer level-3
	// Declaring pointer to double pointer **ptr2
	int*** ptr3;

	// Storing address of variable var
	// to pointer variable ptr1
	ptr1 = &var;

	// Storing address of pointer variable
	// ptr1 to level -2 pointer ptr2
	ptr2 = &ptr1;

	// Storing address of level-2 pointer
	// ptr2 to level-3 pointer ptr3
	ptr3 = &ptr2;

	// Displaying values
	printf("Value of variable "
		"var = %d\n",
		var);
	printf("Value of variable var using"
		" pointer ptr1 = %d\n",
		*ptr1);
	printf("Value of variable var using"
		" pointer ptr2 = %d\n",
		**ptr2);
	printf("Value of variable var using"
		" pointer ptr3 = %d\n",
		***ptr3);

	return 0;
}
