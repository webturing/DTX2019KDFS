#include<stdio.h>
#include<math.h>

void grow(int x) {//fail
    printf("In function grow:&x=%d\n", &x);
    x++;
}

void grow2(int x[]) {
    x[0]++;
}

int main() {
    int x = 3;
//	x++;
    printf("In function main:&x=%d\n", &x);
    grow(x);
    printf("%d\n", x);
    grow2(&x);
    printf("%d\n", x);
} 
