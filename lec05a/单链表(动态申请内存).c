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
		printf("\n");
	}
}
int main() {
	print();
	struct Node p={1,NULL}; 
	add(&p);
	print();
	struct Node *q=(struct Node*)malloc(sizeof(struct Node));
	q->data=999;
	q->next=NULL;
	add(q);
	print();
	return 0;
}
