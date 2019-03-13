#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct Student {
    int num;
    double score;
    struct Student *next;
} *head = NULL;

void print() {
    struct Student *p = head;
    while (p) {
        printf("%d %.1f\n", p->num, p->score);
        p = p->next;
    }
}

void add(struct Student *p) {
    p->next = head;
    head = p;
}

void find(int num) {
    struct Student *p = head;
    while (p) {
        if (p->num == num) {
            printf("%d %.1f\n", p->num, p->score);
            return;
        }
        p = p->next;
    }
    puts("not found");
}

int main() {
    int num[5] = {104, 105, 106, 107, 108};
    double score[] = {88, 77, 66, 55, 44};
    for (int i = 4; i >= 0; i--) {

        struct Student *p = (struct Student *) malloc(sizeof(struct Student));
        p->num = num[i];
        p->score = score[i];
        add(p);
    }
    print();
    int num2;
    scanf("%d", &num2);
    find(num2);

    system("pause");

}
