#include<stdio.h>

void input(int *a, int n) {
    int *p;
    for (p = a; p < a + n; p++)
        scanf("%d", p);
}

void print(int *a, int n) {
    int *p;
    for (p = a; p < a + n; p++)
        printf("%d\n", *p);

}

void printR(int *a, int n) {
    int *p;
    for (p = a + n - 1; p >= a; p--)
        printf("%d\n", *p);

}

int main() {
    int a[10];
    input(a, 10);

    printR(a, 10);
}
