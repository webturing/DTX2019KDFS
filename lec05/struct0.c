#include<stdio.h>
#include<math.h>

struct Person {
    char name[100];
    int age;
};
struct Point {
    int x, y;
};

void print(struct Point p) {
    printf("%d %d\n", p.x, p.y);
}

double distance(struct Point p, struct Point q) {
    double dx = p.x - q.x;
    double dy = p.y - q.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Person tj = {"TJ", 20};
    tj.age++;
    struct Point p;

//	p.x=3;
//	p.y=4;
    scanf("%d%d", &(p.x), &(p.y));
    print(p);
    struct Point z = {0, 0};
    printf("%.3f\n", distance(p, z));
    return 0;
} 
