#include<stdio.h>
#include<math.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node p = {1, NULL};
    struct Node q = {2, NULL};
    struct Node r = {3, NULL};
    printf("%d\n", p.next == NULL);//�ж�p�Ƿ���tail
    p.next = &r;
    printf("%d\n", p.data);//����p��data��
    printf("%d\n", p.next == NULL);//�ж�p�Ƿ���tail
    if (p.next != NULL) {
        printf("%d", p.next->data);
    }
    return 0;
}
