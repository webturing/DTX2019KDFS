#include<stdio.h>
#include<math.h>

struct Point {
    int x, y;
};

void input(struct Point p) {//fail
    scanf("%d%d", &p.x, &p.y);
}

void input2(struct Point *p) {//ok
//	scanf("%d%d",&(*p).x,&(*p).y);//ok but ugly
    scanf("%d%d", &p->x, &p->y);//ok and elegant
}

void print(struct Point *p) {
    printf("%d %d\n", p->x, p->y);
}

int main() {
    struct Point p = {3, 4};
    input2(&p);
    print(&p);

} 
