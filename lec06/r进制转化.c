#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n = 6, r = 2;
    int b[32] = {0};
    int i = 0;
    while (n > 0) {
        //printf("%d",n%r);
        b[i++] = n % r;
        n /= r;
    }
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%d", b[j]);
    }
    system("pause");

}
