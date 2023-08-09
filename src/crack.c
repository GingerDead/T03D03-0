#include <stdio.h>

int main() {
    double x, y;
    if ((scanf("%lf %lf", &x, &y) == 2) && (getc(stdin) == '\n')) {
        (x * x + y * y < 25) ? printf("GOTCHA") : printf("MISS");
    } else printf("n/a");

    return 0;
}