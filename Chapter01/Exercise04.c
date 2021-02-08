/* Author: João Paulo Back - 2018

/*
*
* Exercise 1-4. Write a program to print the corresponding Celsius to
* Fahrenheit table.
*
*/

#include <stdio.h>

int main(void){

    int fahr;
    printf("Celsius\tFahr\n");
    for (fahr = 0; fahr < 300; fahr = fahr + 20){
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

}
