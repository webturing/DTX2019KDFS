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

int cmp(struct Point *p, struct Point *q) {
    int dx = p->x - q->x;//��һ�ؼ��� ����x����
    if (dx != 0)return dx;
    int dy = p->y - q->y;//�ڶ��ؼ��� ����y����
    return dy;
}

void sort(struct Point p[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n - i - 2; j++) {
            if (cmp(p + j, p + j + 1) > 0) {
                struct Point t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    struct Point p[10];
    int i;
    for (i = 0; i < 10; i++)input(p + i);
    sort(p, 10);
    for (i = 0; i < 10; i++)print(p + i);
    return 0;
}
