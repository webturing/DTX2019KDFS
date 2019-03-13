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
    struct Node *head = NULL;
    head = &p;
    printf("%d\n", head->next);
    printf("%d\n", head->data);
    head->next = &r;
    printf("%d\n", head->next->data);
    head->next->next = &q;
    printf("%d\n", head->next->next->data);
    return 0;
}
