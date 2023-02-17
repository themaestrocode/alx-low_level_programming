#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* detecting whether the number is less than, equal to, or greater than 0 */
	if(n > 0)
		printf("%d is positive", n);
	else if(n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);

	return (0);
}
