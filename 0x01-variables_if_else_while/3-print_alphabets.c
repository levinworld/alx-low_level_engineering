lude <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			putchar(lower_case);
										}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		{
			putchar(upper_case);
											}
			putchar('\n');
	return (0);
}
