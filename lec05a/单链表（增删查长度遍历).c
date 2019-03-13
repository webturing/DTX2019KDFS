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

void pop() { //ɾ��ͷ�ڵ�
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

int length() {
    struct Node *p = head;
    int tot = 0;
    while (p != NULL) {
        ++tot;
        p = p->next;
    }
    return tot;
}

int find(int data) {
    if (head == NULL)
        return -1;
    struct Node *p = head;
    int t = 0;
    while (p != NULL) {
        if (p->data == data)
            return t;
        t++;
        p = p->next;
    }
    return -1;
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
    printf("7 at postion: %d\n", find(7));

    for (i = 0; i < 20; i++) {
        pop();
        print();
    }
    return 0;
}
