#include <stdio.h>
int main() {
    int a[25][25] = { 0, };
    int num = 1, x = 0, y = 0;
    int i, k, j;
    int n, sign = 1;
    scanf("%d", &n);
    for (k = 0; k < n; ++k) {
        a[y][x] = num++;
        x += sign;
    }
    x -= 1;
    for (i = n - 1;i > 0; --i) {
        for (j = 0; j < i; ++j) {
            y += sign;
            a[y][x] = num++;
        }
        sign *= -1;
        for (k = 0; k < i; ++k) {
            x += sign;
            a[y][x] = num++;
        }
    }
    for (int i = 0; i < n; ++i) {    
        for (int j = 0; j < n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}