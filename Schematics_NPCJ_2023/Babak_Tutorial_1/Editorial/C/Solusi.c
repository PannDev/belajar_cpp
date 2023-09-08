#include <stdio.h>
#define ull unsigned long long
#define mod 1000000007

int main(){
    ull a, b;
    scanf("%llu %llu", &a, &b);
    printf("%llu", ((a % mod) + (b % mod)) % mod);
    return 0;
}