#include<stdio.h>
int main(){
    float c, f;
    printf("Celcius\tFarhenite\n");
    for(c = 300.0; c>= 0; c-=20.0){
        printf("%7.1f\t%9.2f\n",c, (9.0/5.0)*c + 32.0);
    }
    return 0;
}

