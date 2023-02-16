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
    printf("Digits:\n");
    for(i=0;i<10;i++)
        printf("%d -> %d\n", i, nDigit[i]);
    printf("Whitespaces: %d \nOther: %d", nwhite, nother);
}
