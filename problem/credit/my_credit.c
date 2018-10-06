#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i = 0, j = 0, k = 0, l = 0, sum = 0, final = 0;
    long creditnum = 0, num[20];

	printf("number:");
	creditnum = get_long();

    while( creditnum != 0)
	{
        num[i] = creditnum % 10;
		creditnum /= 10;
		if (creditnum != 0)
			i++;
	}


    for (j = 0; j <= i; j++)
	{
		final += num[j];

	    ++j;
        
		if ( j > i)
			break;
		else
		{
			l = num[j]*2;
    	    if (l / 10 != 0)
			{
				sum += l % 10;
				l /= 10;
				sum += l;
			}
        	else
				sum += l;

		}
	}

	final += sum;
	if ( final % 10 != 0)
		printf("invalid\n");
	else
	{
		if ((num[i] == 3 && (num[i-1] == 4 || num[i-1] == 7)))
			printf("Amex\n");
		else if ((num[i] == 5 && (num[i-1] == 1 || num[i-1] == 2 || num[i-1] == 3 || num[i-1] == 4 || num[i-1] == 5)) || (num[i] == 2 && num[i-1] == 2))
			printf("Master\n");
		else if (num[i] == 4)
	        printf("visa\n");
		else if (num[i] == 3 && num[i-1] == 5)
	        printf("JCB\n");
		else if (num[i] == 6 && num[i-1] == 0)
	        printf("Discover\n");
		else if (num[i] == 3 && num[i-1] == 0)
	        printf("DinClub\n");
		else
		    printf("invalid\n");
	}
}

