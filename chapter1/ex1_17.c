/*
 * Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
 */

#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

main()
{
    int len;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0){
        if(len > 80){
            //printing the line
            printf("%s", line);
        }
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


