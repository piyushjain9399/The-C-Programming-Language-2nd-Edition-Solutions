#include<stdio.h>
int main()
{
    float f, c;
    int lo, hi, step;
    lo = -50;
    hi = 50;
    step = 10;
    
    c = lo;
    printf("celcius\tfarhenite\n");
    while(c<=hi){
        f = (9.0/5.0)*c + 32.0;
        printf("%7.1f\t%9.2f\n", c, f);
        c += step;
    }
    return 0;
}

