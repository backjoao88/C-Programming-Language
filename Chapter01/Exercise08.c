
/* Author: João Paulo Back - 2018

/*
*
* Exercise 1-8. Write a program to replace each tab by the three-character
* sequence >, backspace, -, which prints ?s ), and each backspace by the
* similar sequence <. This makes tabs and backspaces visible. n
*
*
*/

#include <stdio.h>

int main(){
    char c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\t\n");
        }
        if(c == '\b'){
            printf("\\b\n");
        }
        if(c == '\\'){
            printf("\\\\\n");
        }
    }
    return 0;
}
