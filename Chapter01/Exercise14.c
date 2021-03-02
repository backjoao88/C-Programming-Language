

/* Author: João Paulo Back - 2018

/*
*
* Exercise 1-14. Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, 
* and as much as possible of the text.
*
*/

#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

void copy(char to[], char from[]);
int getline(char s[], int maxLine);


int main(void){
	int len;	/* current line length */
	int max;	/* maximum length seen so far */
	char line[MAXLINE];	/*current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) { 
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		printf("The size of actual line: %d %s", len - 1, line);
	}
	if (max > 0) 	/* there was a line */
		printf("%s", longest);

	return 0;
}

int getline(char s[], int lim){ 
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i;
	i= 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}			


