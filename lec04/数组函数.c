#include<stdio.h>

void input(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

}

void sort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j <= n - i - 2; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
}

int main() {
    int a[10];
    input(a, 10);
    sort(a, 10);
    print(a, 10);
}
