#include<stdio.h>
int main()
{
    char currChar;
    char nextChar;
    int flagInt = 0;
    currChar = getchar();
    while(currChar != EOF){
       printf("%c",currChar);
       nextChar = getchar();
       while(currChar == ' ' && nextChar == ' '){
           nextChar = getchar();
           flagInt = 1;
       }
       if(flagInt){
            currChar = nextChar;
            flagInt = 0;
       }
       currChar = nextChar;
    }
    printf("\n");


}
