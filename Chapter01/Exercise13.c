

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

char clower(char c){
    if(c >= '0' && c <= '9'){
        return c;
    }else{
        return c+32;
    }
}

int main(){

    char c;

    while((c = getchar()) != EOF){
        printf("%c\n", clower(c));
    }

}
