
/* Author: João Paulo Back - 2018

/*
*
* Exercise l-7. Write a program to copy its input to its output, replacing each
* string of one or more blanks by a single blank.
*
*/

#include <stdio.h>

int main(){
    char c;
    char lastc;
    lastc = '1';
    while((c = getchar()) != EOF){
        if(c == ' '){
            if(lastc != ' '){
                putchar(c);
            }
        }else{
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}
