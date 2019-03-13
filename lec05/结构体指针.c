#include<stdio.h>
#include<math.h>

struct Point{
	int x,y;
};
void print(struct Point p){
	printf("%d %d\n",p.x,p.y);
}

int main(){
	struct Point p={3,4	};
	p.x++;
	print(p);
	struct Point *q;
	q=&p;
	(*q).x++;
	print(*q);
	q->x++;
	print(p);
    return 0;
} 
