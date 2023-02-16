/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include<stdio.h>

main()
{
    int c, state;
    // Array wordLength to store word length till 9 and 9+.
    // wordLength[i] stores count of words with length i+1.
    int wordLength[10];
    for(int i=0;i<10;i++)
        wordLength[i] = 0;
    int currWordLen = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(currWordLen > 9)
                wordLength[9]++;
            else if(currWordLen > 0 && currWordLen <= 9)
                wordLength[currWordLen-1]++;
            currWordLen = 0;
        }
        else
            currWordLen++;
    }
    // printing the results:
    // For testing purposes. Works, hence commenting it out.
    /*
    for(int i=0;i<9;i++)
        printf("words of length %d -> %d\n", i+1, wordLength[i]);
    printf("words of length 9+ -> %d\n", wordLength[9]);
    */

    // Printing the histogram:
    printf("Word length | Frequency\n");
    printf("-----------------------\n");
    for(int i = 0;i<9;i++){
        printf("%5d       |", i+1);
        for(int j = 0; j<wordLength[i];j++)
            printf("=");
        printf("\n");
    }
    printf("    9+      |");
    for(int j=0;j<wordLength[9];j++)
        printf("=");
    printf("\n");
}
