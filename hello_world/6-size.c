#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
  
/* Determine and Print the size of char */
printf("Size of a char: %u byte(s)\n", sizeof(char));
    
/* Determine and Print the size of int */
printf("Size of an int: %u byte(s)\n", sizeof(int));

/* Determine and Print the size of long int */
printf("Size of a long int: %u byte(s)\n", sizeof(long int));

/* Determine and Print the size of long long int */
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));

/* Determine and Print the size of float */
printf("Size of a float: %u byte(s)\n", sizeof(float));

return 0;

}
