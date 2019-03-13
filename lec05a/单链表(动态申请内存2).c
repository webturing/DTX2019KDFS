#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL;

void add(struct Node *p) {//ͷ�巨
    p->next = head;
    head = p;
}

void pop() {//ɾ��ͷ�ڵ�
    if (head == NULL)return;    //1. �ж��Ƿ��ǿ�����
    struct Node *p = head;   //2.��ס׼�����ٵĽڵ��ַ
    head = head->next;
    free(p); //����ԭ����ͷ�ڵ㣬�ͷ�heap�ռ�
}

void print() {
    if (head == NULL) {
        puts("[]");
    } else {
        struct Node *p = head;
        while (p != NULL) {
            printf("->%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

int main() {
    int i;
    for (i = 10; i >= 1; i--) {
        struct Node *q = (struct Node *) malloc(sizeof(struct Node));
        q->data = i;
        q->next = NULL;
        add(q);
    }
    print();
    for (i = 0; i < 20; i++) {
        pop();
        print();
    }
    return 0;
}
