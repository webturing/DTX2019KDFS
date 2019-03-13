#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct student {
    int num;
    char name[20];
    int a, b, c;
    double avg;
} s[10];

void sort() {
    int i, j;
    struct student t;
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 8 - i; j++) {
            if (s[j].avg < s[j + 1].avg) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int i;
    int A = 0, B = 0, C = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d%s%d%d%d", &s[i].num, s[i].name, &s[i].a, &s[i].b, &s[i].c);
        // printf("%d %s %d %d %d\n",s[i].num,s[i].name,s[i].a,s[i].b,s[i].c);
        s[i].avg = (s[i].a + s[i].b + s[i].c) / 3.0;
        A += s[i].a;
        B += s[i].b;
        C += s[i].c;
    }
    printf("%.2f %.2f %.2f\n", A / 10.0, B / 10.0, C / 10.0);
    sort();
    for (i = 0; i < 10; i++) {
        if (s[i].a >= A / 10.0 && s[i].b >= B / 10.0 && s[i].c >= C / 10.0)
            printf("%d %s %d %d %d %.2f\n", s[i].num, s[i].name, s[i].a, s[i].b, s[i].c, s[i].avg);
    }
    //system("pause");
    return 0;
}
