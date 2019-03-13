#include<stdio.h>

//#include<string.h>
int strlen(char s[]) {
    int i;
    for (i = 0; s[i]; i++);
    return i;
}

void strcpy(char s[], char t[]) {
    int i, m = strlen(t);
    for (i = 0; i <= m; i++)
        s[i] = t[i];
}

void strcat(char s[], char t[]) {
    int i, m = strlen(t), n = strlen(s);
    for (i = 0; i <= m; i++)
        s[i + n] = t[i];
}

int strcmp(char s[], char t[]) {
    int m = strlen(t), n = strlen(s);
    int i;
    for (i = 0; i <= m || i <= n; i++) {
        if (s[i] != t[i])
            return s[i] - t[i];
    }
    return 0;
}

int main() {
    char a[100] = "hello world";
    printf("%d\n", strlen(a));
    char b[100];
    strcpy(b, a);
    puts(b);
    strcat(b, a);
    puts(b);
    printf("%d\n", 0 > strcmp("apple", "kiwi"));
    printf("%d\n", 0 == strcmp("kiwi", "kiwi"));
    printf("%d\n", 0 < strcmp("kiwi", "apple"));
    return 0;
}
