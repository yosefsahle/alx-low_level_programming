#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 when it's a success
 */

void positive_or_negative(int i)
{
if (i < 0)
printf("%d is negative\n", i);
 /**
 *if statement used to evaluate the value of a number.
 *0 -  a value equal to zero.
 */
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is positive\n", i);
}
}
