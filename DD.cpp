#include <stdio.h>

int main() {
    int a, b, c, middle;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b) {
        if (b >= c)
            middle = b;
        else if (a <= c)
            middle = a;
        else
            middle = c;
        }
    else if (a >= c)
        middle = a;
    else if (b >= c)
        middle = c;
    else
        middle = b;
    printf("%d",middle);
    
    return 0;
    }