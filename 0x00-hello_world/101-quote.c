#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(msg) - 1;
ssize_t ret;
ret = write(STDERR_FILENO, msg, len);
if (ret != len)
	return (EXIT_FAILURE);
return (EXIT_SUCCESS);
}
