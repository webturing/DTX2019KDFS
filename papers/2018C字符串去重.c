#include<stdio.h>
#include<string.h>

char words[100][100];//0~n-1里存储了所有的不重复的单词列表
char buff[100];//当前录入的符号，可能含有一个或者多个.
int n = 0;//代表有多少个不重复的单词

int find(char *s) {//判断s是否是一个已经出现的单词
    int j;
    for (j = 0; j < n; j++)
        if (strcmp(words[j], s) == 0)
            return 1;
    return 0;
}

int main() {
    freopen("input2.txt", "r", stdin);
    //freopen("output2.txt", "w", stdout);
    while (1 == scanf("%s", buff)) {
        if (strchr(buff, '.') == NULL && strchr(buff, ',') == NULL) {
            if (find(buff) == 0)
                strcpy(words[n++], buff);
            continue;
        }
        char word[100];
        char *p = buff, *q = word;
        while (*p) {
            if ('a' <= *p && *p <= 'z') {
                *q++ = *p++;
            } else if (*p == ',' || *p == '.') {
                *q = 0;//结束当前的单词，进入处理下一个单词
                if (strlen(word) > 0 && find(word) == 0)
                    strcpy(words[n++], word);
                q = word;
                p++;
            } else p++;
        }
    }
    int j;
    for (j = 0; j < n; j++)
        printf("%s ", words[j]);

}
