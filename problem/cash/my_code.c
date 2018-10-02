#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float cash = 0;
	int quarters = 25, dimes = 10, nickels = 5, pennis = 1, number = 0;

	while(1)
	{

	    printf("change owed:");
	    cash = get_float();
		if (cash < 0)
			continue;
	    cash *= 100;

		cash = (int)round(cash);
		number = cash / quarters;
		cash = (int)cash % quarters;
    
		cash = (int)cash;
		number += (cash / dimes);
		cash = (int)cash % dimes;

    	cash = (int)cash;
		number += (cash / nickels);
		cash = (int)cash % nickels;
    
    	cash = (int)cash;
		number += cash;
        break;
	}

    printf("%d\n", number);
	return 0;

}

