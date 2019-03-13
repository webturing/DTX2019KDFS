#include<stdio.h>
#include<string.h>

int main() {
    char a[100] = "hello world";
    printf("%d\n", strchr(a, 'o') - a);
    printf("%d\n", strchr(a, 'x'));
    return 0;
} 
