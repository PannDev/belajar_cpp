#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("segitiga ");

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) printf("siku-siku ");
    else if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a) printf("lancip ");
    else printf("tumpul ");

    if (a == b && b == c) printf("sama sisi\n");
    else if (a == b || b == c || a == c) printf("sama kaki\n");
    else printf("sembarang\n");

    return 0;
}