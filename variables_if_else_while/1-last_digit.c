#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*The string Last digit of, followed by n, followed by the string is, followed by :
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
* 
**/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */

int lastdigit(int n);{
    int lastdigit = n % 10;
    return lastdigit;
}

if (lastdigit(n) > 5)
{
printf("Last digit of %d is greater than 5\n", n, lastdigit);
}

else if (lastdigit(n) == 0)
{
printf("Last digit of %d is 0\n", n, lastdigit);
}

else
{
printf("Last digit of %d is less than 6 and not 0\n", n, lastdigit);
}

return (0);
}
