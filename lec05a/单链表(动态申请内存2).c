#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
}*head=NULL;
void add(struct Node *p) {//头插法 
	p->next=head;
	head=p;
}
void pop(){//删除头节点 
	if(head==NULL)return ; 	//1. 判断是否是空链表
	struct Node *p=head;   //2.记住准备销毁的节点地址 
	head=head->next;
	free(p); //销毁原来的头节点，释放heap空间 
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
	int i;
	for(i=10;i>=1;i--){
		struct Node *q=(struct Node*)malloc(sizeof(struct Node));
		q->data=i;
		q->next=NULL;
		add(q);		
	}
	print();
	for(i=0;i<20;i++){
		pop();
		print();
	}
	return 0;
}
