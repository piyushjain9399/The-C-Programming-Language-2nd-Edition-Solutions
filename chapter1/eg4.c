#include<stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20
int main(){
    float c, f;
    printf("Celcius\tFarhenite\n");
    for(c = UPPER; c>= LOWER; c-=STEP){
        printf("%7.1f\t%9.2f\n",c, (9.0/5.0)*c + 32.0);
    }
    return 0;
}

