#include <stdio.h>

int max(int a, int b);

int main() {
    int x, y;
    if ((scanf("%d %d", &x, &y) == 2) && (getc(stdin) == '\n'))
        printf("%d", max(x, y));
    else 
        printf("n/a");
    
    return 0;
}

int max(int a, int b) {
    if (a >= b) return a;
    else return b;
}