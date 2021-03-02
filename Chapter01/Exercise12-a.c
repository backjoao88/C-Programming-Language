

/* Author: João Paulo Back - 2018

/*
*
* Digit cont
*
*
*/

#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for(i = 0; i < 10; ++i){
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            printf("%c", c);
            ++ndigit[c-'0'];
        }else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }else{
            ++nother;
        }
    }
    printf("digits=");
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }
    printf("\nwhite space = %d, other = %d\n", nwhite, nother);
}
