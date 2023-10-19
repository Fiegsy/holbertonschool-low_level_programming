#include <stdio.h>
/**
 *
 * Return: always (0)
 *
 */
int main(void)
{
char alphabets = 'z';

while (alphabets >= 'a')
{	
putchar(alphabets);
alphabets--;
}
putchar('\n');
return (0);
}
