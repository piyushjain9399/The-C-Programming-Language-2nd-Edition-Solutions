/*
 * Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same spacing. Use the same tab stops as for
 * detab. When either a tab or a single blank would suffice to reach a tab stop, which
 * should be given preference?
 */
#include <stdio.h>
#define TABSTOP 8

main()
{
    char c;
    int numOfSpaces;
    while((c = getchar()) != '\0'){
        if(c != ' '){
            putchar(c);
            continue;
        }
        while((c = getchar()) == ' '){
            numOfSpaces++;
        }
        if(numOfSpaces >= TABSTOP){
            for(int i=0;i<numOfSpaces/TABSTOP;i++)
                putchar('\t');
            for(int i=0;i<numOfSpaces%TABSTOP;i++)
                putchar(' ');
        }
        numOfSpaces = 0;
        putchar(c);
    }
    return 0;
}
