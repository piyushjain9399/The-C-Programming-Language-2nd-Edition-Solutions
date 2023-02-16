/*
 * Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
 *  and to delete entirely blank lines. 
 */

// Plan:
// 1. Getting a line and storing it in a char array, also noting its length.
// 2. Writing a function that removes the spaces and tabs from the line,
// 3. The function does so by traversing from the end to the front of the line reducing the length
// parameter of the input line for each tab or space encountered.
// 4. Write a function to copy the old line into a new line till the updated length. 
// 5. Print the line.

#include<stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copyLineTillLen(char from[], char to[], int newLen);
int lenWithoutTabsSpace(char line[], int orgLen);

int main()
{
    char line[MAXLINE];
    char updatedLine[MAXLINE];
    int len = 0;
    
    while((len = getLine(line, MAXLINE)) > 0){
        int newLen = lenWithoutTabsSpace(line, len);
        // the case where the line is empty, Len less than 1 since the array would be either '\n''\0'  or '\0'. 
        if(newLen <= 1)
            continue;
        else if(newLen < len){ 
            copyLineTillLen(line, updatedLine, newLen); 
            printf("%s", updatedLine);
        }
        else
            printf("%s",line);
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int lenWithoutTabsSpace(char line[], int orgLen){
    int newLen = orgLen;
    while(newLen - 2 > 0 && (line[newLen - 2] == '\t' || line[newLen - 1] == ' '))
        newLen--;
    return newLen;
}

void copyLineTillLen(char line[], char updatedLine[], int newLen){
    int i;
    for(i = 0; i < newLen - 1; i++)
        updatedLine[i] = line[i];
    updatedLine[i] = '\n';
    i++;
    updatedLine[i] = '\0';
}






