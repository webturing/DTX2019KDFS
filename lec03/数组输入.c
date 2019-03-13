#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[10];
    print(a, 10);
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", a + i);
    }
    print(a, 10);


}
