#include <stdio.h>

int gcd(unsigned int a, unsigned int b){
    unsigned int s,r;

    if( a == b){
        return a;
    }
    if( a == 1 || b == 1){
        return 1;
    }

    if( a > b){
        s = b;
        b = a;
    }else{
        s = a;
    }

    r = b % s;
    while( r != 0){
        r = s % r;
    }
    return s;
}
int main(void){
    unsigned int a,b,f;
    scanf("%u\n%u",&a,&b);
    f = gcd(a,b);
    printf("( %d,%d ) g.c.d is %d",a,b,f);

    /*
     printf("Hello World 2013!");
    */
    return 0;
}
