#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c;
    char d = '\n';
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            putchar(d);
            continue;
        }
        putchar(c);
    }
    return 0;
}
