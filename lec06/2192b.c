#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct person {
    char name[20];
    int count;
    struct person *next;
} *head = NULL;

void add(struct person *p) {
    p->next = head;
    head = p;
}

void print() {
    struct person *p = head;
    while (p != NULL) {
        printf("%s:%d\n", p->name, p->count);
        p = p->next;
    }
}

int length() {
    int tot = 0;
    struct person *p = head;
    while (p != NULL) {
        ++tot;
        p = p->next;
    }
    return tot;
}

void insert(char *name) {
    struct person *p = head;
    int find = 0;
    while (p != NULL) {
        if (strcmp(p->name, name) == 0) {
            find = 1;
            p->count++;
            break;
        }
        p = p->next;
    }
    if (find == 0) {
        struct person *q = (struct person *) malloc(sizeof(struct person));
        strcpy(q->name, name);
        q->count = 1;
        q->next = NULL;
        add(q);
    }

}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        char name[20];
        scanf("%s", name);
        insert(name);
    }
    int len = length();
    printf("%d\n", len);
    print();
    struct person pp[len];
    struct person *p = head;
    for (i = 0; i < len; i++) {
        pp[i] = *p;
        p = p->next;
    }
    int j;
    for (i = 0; i < len; i++)
        for (j = 0; j <= len - 2 - i; j++)
            // if(strcmp(pp[j].name,pp[j+1].name)>0)
            if (pp[j].count < pp[j + 1].count) {
                struct person t = pp[j];
                pp[j] = pp[j + 1];
                pp[j + 1] = t;
            }
    for (i = 0; i < len; i++) {
        printf("%s:%d\n", pp[i].name, pp[i].count);
    }

    return 0;
}
