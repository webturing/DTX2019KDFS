#include<stdio.h>
#include<math.h>

struct Point {
    int x, y;
};

void input(struct Point *p) {
    scanf("%d%d", &p->x, &p->y);//ok and elegant
}

void print(struct Point *p) {
    printf("%d %d\n", p->x, p->y);
}

int main() {
    struct Point p[10];
    int i;
    for (i = 0; i < 10; i++)input(p + i);
    for (i = 0; i < 10; i++)print(p + i);
    return 0;
}
