/* Author: João Paulo Back - 2018

/*
*
* Exercise 1-6. Write a program to count blanks, tabs, and newlines.
* 
*
*/

#include <stdio.h>

int main(){
    char c;
    int tabs, blanks, lines;
    while((c = getchar()) != EOF){
		if(c == '\t')
			++tabs;
		if(c == ' ')
			++blanks;
        if(c == '\n')
            ++lines;
    }
    printf("%d", tabs+blanks+lines);

    return 0;
}
