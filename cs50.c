#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>

string get_string(void)
{
    string buffer = NULL;
    char c;
    int size = 100, i = 0, j = 0;    

    buffer = (char*)malloc(size*sizeof(char));
    while((c = getc(stdin)) != '\n')
        buffer[i++] = c;

    if (i >= 100)
    {   
        printf("the size is over flow\n");
        free(buffer);
        return NULL;
    }   

    return buffer;
}

int get_int()                                                                                                                            
{
    int gint = 0, resultINT = 0;
    
    resultINT = scanf("%d", &gint);
    return resultINT;
}
