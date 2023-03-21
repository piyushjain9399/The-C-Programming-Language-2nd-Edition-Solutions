/*
Exercise 1-14. Write a program to print a histogram of the frequencies of dif- ferent characters in its input.
*/

#include<stdio.h>

main()
{

    int c, i, nwhite, nother;
    int nDigit[10];
    for(i=0;i<10;i++)
        nDigit[i]=0;
    nwhite = nother = 0;
    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9')
            nDigit[c-'0']++;
        else if(c == ' ' || c == '\n' || c == '\t')
            nwhite++;
        else
            nother++;
    }
    // Printing the histogram:
    printf("Type   | Frequency\n");
    printf("------------------\n");
    printf("Digits:\n");
    for(int i = 0;i<10;i++){
        printf("%4d   |", i);
        for(int j = 0; j<nDigit[i];j++)
            printf("=");
        printf("\n");
    }
    printf("nwhite |");
    for(int j = 0;j<nwhite;j++)
        printf("=");
 
    printf("\nnother |");
    for(int j = 0; j < nother; j++)
        printf("=");

    printf("\n");
}
