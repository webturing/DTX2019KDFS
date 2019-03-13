#include<stdio.h>
#include<string.h>

int main() {
    char s[100] = "hello world";
    puts(s);
    s[5] = '\0';
    puts(s + 6);//"hello"
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("%d\n", i);
    printf("%d\n", strlen(s + 6));


}
