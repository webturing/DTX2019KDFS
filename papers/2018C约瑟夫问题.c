#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL, *tail = NULL;//带首尾节点的环状列表
int size = 0;//链表长度

void print(struct Node *node) {//因为是环状链表，所以要指定一个头部（任何元素都可以成为头节点)
    if(size==0)return ;
    struct Node *p = node;
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void add(int data) {//环状链表的尾部插入（因为有tail,其实很好操作)
    struct Node *node = (struct Node *) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    if (head == NULL) {//注意分类讨论
        head = node;
        tail=node;
        node->next=node;
        ++size;
    } else {//大于一个元素
        tail->next = node;
        node->next = head;//构成环
        tail=node;//node成为新节点
        ++size;
    }
}


int main() {
    int i;
    for(i=1;i<=8;i++){
        add(i);
    }
    print(head);
    struct Node * p=tail;//考虑到第一次的特例，所以从尾部开始
    while(size){
        int j;
        for(j=0;j<2;j++)
            p=p->next;//先找到待删除元素的前一个，
        struct Node *q=p->next;//q是待删除的元素
        printf("remove %d\n",q->data);
        struct Node *r=q->next;
        p->next=r;//删除了q
        free(q);//释放节点空间
        --size;//圈人数少一个
        print(r);//打印从r开始的新环
    }
    return 0;


}
