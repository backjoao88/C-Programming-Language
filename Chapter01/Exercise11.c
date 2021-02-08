
/* Author: João Paulo Back - 2018

/*
*
* Exercise 1-11. Revise the word count program to use a better definition of "word," 
* for example, a sequence of letters, digits and apostrophes that begins with a letter.
*
*
*/

/*
*  a123 is a word.
*  121 is not a word.
*  1a is not a word.
*  John is a word.
*
*/

#include <stdio.h>

#define YES 1
#define NO 0

int main (){
    int c,nl,nw,nc,inword;  
    inword=NO;
    nl=nw=nc=0;
    while ((c=getchar()) !=EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            inword=NO;
        else if (inword==NO){
            if(c != '1' && c != '2' && c!='3' && c!='4' && c!='5' && c!='6' && c!='7' && c!='8' && c!='9'){
                inword=YES;
                ++nw;
            }
        }
    }
    printf("%d %d %d\n", nl,nw,nc);
    return 0;
}