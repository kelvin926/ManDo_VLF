#include <stdio.h>
int main() {
    int num, middle;
    scanf("%d", &num);
    middle = (num / 2)+1;
    for (int i = 1; i <= num; i++) {
        for (int j = i + 1; j < num + 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2)-1; j++)
        {
            if (i == middle) {
                printf("*");
            }
            else if (j == 1 || j == i * 2 - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}