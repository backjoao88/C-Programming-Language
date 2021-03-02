

/* Author: João Paulo Back - 2018

/*
*
* Write a program to print a histogram of the lengths of words
* its input. It is easiest to draw the histogram horizontally; a vertical orientation 
* is more challenging.
*
*
*/

#include <stdio.h>

#define YES 1
#define NO 0

int main(){

    int inword = NO;
    int c, i, j, nwhite, nother, nwords;
    int ndigit[10];
    nwhite = nother = nwords = 0;

    for(i = 0; i < 10; ++i) ndigit[i] = 0;

    while((c = getchar()) != EOF && nwords <= 10){
        if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
            inword = NO;
        }else if(nwords == 0){
            ++nwords;
            ++nother;
            inword = YES;
        }else if(inword == YES){
            ++nother;
        }else if(inword == NO){
            ndigit[nwords] = nother;
            ++nwords;
            inword = YES;
            nother = 1;
        }
    }

    ndigit[nwords] = nother;

    printf("======================================\n");
    for (i = 1; i <= nwords; ++i){
        printf("00%d - ", i);
        for (j = 0; j < ndigit[i]; ++j){
            printf("x");
        }
        printf("\n");
    }
    printf("======================================");

}
