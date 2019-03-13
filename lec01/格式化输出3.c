#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    int h = 9, m = 12, s = 1;
    printf("%d:%d:%d\n", h, m, s);
    printf("%2d:%2d:%2d\n", h, m, s);
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
