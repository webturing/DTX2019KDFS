#include<stdio.h>
#include<string.h>

int main() {
    char a[100] = "apple";
    char b[100] = "kiwi";
    printf("%s %s\n", a, b);
    char c[100];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);


    printf("%s %s\n", a, b);
}
