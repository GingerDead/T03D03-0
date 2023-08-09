#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int x, y;
    if ((scanf("%d %d", &x, &y) == 2) && (getc(stdin) == '\n')) {
        printf("%d %d %d ", sum(x, y), sub(x, y), mul(x, y));
        (y == 0) ? printf("n/a") : printf("%d", div(x, y));
    } 
    else printf("n/a");
    
    return 0;
}

int sum(int a, int b) { return (a + b); }
int sub(int a, int b) { return (a - b); }
int mul(int a, int b) { return (a * b); }
int div(int a, int b) { return (a / b); }