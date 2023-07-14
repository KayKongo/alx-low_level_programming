#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
int len = sizeof("and that piece of art is useful\"- Dora Korpar, 2015-10-19\n") - 1;
const char *str = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
write(2, str, len);
return (1);
}
