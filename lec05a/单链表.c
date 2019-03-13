#include<stdio.h>
#include<math.h>
struct Node {
	int data;
	struct Node *next;
}*head=NULL;
void add(struct Node *p) {
	p->next=head;
	head=p;
}
void print() {
	if(head==NULL) {
		puts("[]");
	} else {
		struct Node *p=head;
		while(p!=NULL) {
			printf("->%d ",p->data) ;
			p=p->next;
		}
	}
}
int main() {
	print();
	struct Node p= {1,NULL},q={2,NULL};
    add(&p);
    add(&q);
    print();
	return 0;
}
