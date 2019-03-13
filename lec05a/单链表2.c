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
	struct Node p[10];
	int i;
	for(i=0; i<10; i++) {
		p[i].data=i+1;
		p[i].next=NULL;
	}
	for(i=9; i>=0; i--) {
		add(p+i);
		print();
	}

	return 0;
}
