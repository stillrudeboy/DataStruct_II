#include <stdio.h>
#define ll long long

int main(void){

    ll fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i < 100; ++i){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(int i = 0; i < 100; ++i){
        printf("%lld ", fibo[i]);
    }

    return 0;
}
