/*
 * Exercise 1-19. Write a function reverse(s) that reverses the character string s. 
 * Use it to write a program that reverses its input a line at a time.
 */

#include<stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char line[]);

int main()
{
    char line[MAXLINE];
    int len = 0;

    while((len = getLine(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
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

void reverse(char line[]){
    // Finding the lenght of the string as we are not allowed to use that parameter as input. 
    int len = 0;
    while(line[len] != '\0')
        len++;
    
    // The calculated length contains the '\n' character, we need to not consider it. 
    // Assuming the string is something like: a,b,c, ,\t,\n,\0.
    // The reverse string should look something like: \t, ,c,b,a,\n,\0.
    if(line[len - 1] == '\n')
        len--;
    for(int i=0; i<len/2;i++){
        char temp = line[i];
        line[i] = line[len - 1 - i];
        line[len - 1 - i] = temp;
    }
}







