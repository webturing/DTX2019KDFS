#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    memset(s, 'a', sizeof(s));
    s[0] = 'b';
    s[1] = 'o';
    s[2] = 'y';
    s[3] = 0;
    puts(s);


}
