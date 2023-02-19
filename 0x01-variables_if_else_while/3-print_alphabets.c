include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';
	char capital = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (capital <= 'Z')
        {
                putchar(alphabet);
                capital++;
        }
	putchar('\n');
	return (0);
}

