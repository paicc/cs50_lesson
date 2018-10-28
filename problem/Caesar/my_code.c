#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    string plaintext = NULL;
	int i = 0, j = 0, k = 0;

	if (argc != 2)
	{
		printf("Usage: ./work k\n");
		return 1;
	}

    k = atoi(argv[1]);
	if (k < 0)
	{
		printf("need bigger than zero\n");
		return 1;
	}

	printf("please input your plaintext:  ");
    plaintext = get_string();

	for (i = 0; i < strlen(plaintext); i++)
	{
		j = (int)plaintext[i];

		if ( j >= 65 && j <= 90)
		{
			if ((j + k) > 90)
				j = ((j + k) % 90) + 64;
			else
				j += k;
		}
		if ( j >= 97 && j <= 122)
		{
			if ((j + k) > 122)
				j = ((j + k) % 122) + 96;
			else
				j += k;
		}
		plaintext[i] = j;
	}
	

	printf("\nciphertext = %s\n", plaintext);
    return 0;
}
