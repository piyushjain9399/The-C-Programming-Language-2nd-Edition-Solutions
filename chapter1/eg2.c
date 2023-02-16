#include<stdio.h>

main()
{
    float f, c;
    int lo, hi, step;
    lo = 0;
    hi = 300;
    step = 20;

    f = lo;
    printf("farhenite\tcelcius\n");
    while(f<=hi){
        c = (5.0/9)*(f-32);
        printf("%9.1f\t%7.2f\n", f, c);
        f = f + step;
    }
}
