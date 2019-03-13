#include<stdio.h>

void sort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j <= n - i - 2; j++) {
            if (a[j] > a[j + 1]) {
                int k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }

        }

    }
}

int main() {
    int m = 1987;
    while (1) {
        int a[4] = {m / 1000, m % 1000 / 100, m % 100 / 10, m % 10};
        sort(a, 4);
        int min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        int max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];

        if (m == max - min)break;
        printf("%d\n", max - min);
        m = max - min;

    }
    return 0;
}
