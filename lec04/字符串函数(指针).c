#include<stdio.h>

//#include<string.h>
int strlen(char *s) {
    char *p = s;
    while (*p)
        p++;

    return p - s;
}

int main() {
    char a[100] = "hello world";
    printf("%d\n", strlen(a));

    return 0;
}
