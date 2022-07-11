#include <stdlib.h>
<<<<<<< HEAD

#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - Determines if a number is positive, negative or zero.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)

							{

										printf("%d is positive\n", n);

											}

						else if (n == 0)

								{

											printf("%d is zero\n", n);

												}

							else

									{

												printf("%d is negative\n", n);

													}

								return (0);

=======
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
>>>>>>> a70bc6ba1a8786c321f7a49526def0c370eba79e
}
