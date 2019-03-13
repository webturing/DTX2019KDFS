#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Point {
    int x, y;
};

void print(struct Point p) {
    printf("%d %d\n", p.x, p.y);
}

int main() {
    struct Point *q = (struct Point *) malloc(sizeof(struct Point));
    q->x = 3;
    q->y = 4;
    print(*q);
    free(q);
    return 0;
} 
