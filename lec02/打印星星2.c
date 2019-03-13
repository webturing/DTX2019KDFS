#include<stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    m = n / 2 + 1;
    int i, j;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= m - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j <= 1 || j >= 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = m - 1; i >= 1; i--) {
        for (j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j <= 1 || j >= 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

