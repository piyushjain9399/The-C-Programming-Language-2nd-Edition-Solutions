/*
 * Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
 * of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n 
 * columns. Should n be a variable or a symbolic parameter?
 */
#include <stdio.h>
#define TABSTOP 8

main()
{
    char c;
    int numOfSpaces;
    while((c = getchar()) != '\0'){
        if(c == '\t'){
            numOfSpaces = TABSTOP;
            while(numOfSpaces > 0){
                numOfSpaces--;
                putchar(' ');
            }
        }
        else
            putchar(c);
    }
    return 0;
}
