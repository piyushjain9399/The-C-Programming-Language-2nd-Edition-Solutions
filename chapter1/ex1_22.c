/* Exercise 1-22. Write a program to "fold" long input 
 * lines into two or more shorter lines after the last 
 * non-blank character that occurs before the n-th column 
 * of input. Make sure your program does something 
 * intelligent with very long lines, and if there are 
 * no blanks or tabs before the specified column.
 */

#include<stido.h>
#define COLUMN_NUM 50
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copyUpdatedLine(char line[], char lineOutput[]);

int main(){
    char line[MAXLINE];
    char lineOutput[MAXLINE];
    int len = 0;

    while((len = getLine(line, MAXLINE)) > 0){
        if(len > COLUMN_NUM){
            copyUpdatedLine(line, lineOutput);
            printf("%s", lineOutput);
        }
        else
            printf("%s", line);
    }
}

int getLine(char s[], int lim){
    int c, i;
    for(int i=0; i<lim-1 && (c = getchar()) != EOF && c!= '\n'; i++)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
