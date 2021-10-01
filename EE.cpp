#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &c, &b);
    for (int i = a; i < c; i++)
    {
        printf("%d ", i);
    }
    for (int j = c; j >= b; j--)
    {
        printf("%d ", j);
    }
    return 0;
    }