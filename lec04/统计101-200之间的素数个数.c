#include<stdio.h>

int prime(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int i, cnt = 0;
    for (i = 101; i <= 200; i++) {
        if (prime(i) == 1) {
            printf("%d\n", i);
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
