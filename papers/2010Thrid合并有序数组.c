#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int a[] = {1, 3, 5, 7, 9, 11, 12};
    int b[] = {2, 4, 6, 8, 77, 88};
    int la = sizeof(a) / 4, lb = sizeof(b) / 4;
    int c[la + lb];
    memset(c, 0, sizeof(c));
    int left = 0, right = 0;
    int i;
    for (i = 0; i < la + lb; i++) {
        if (left >= la) {
            c[i] = b[right++];
            continue;
        }
        if (right >= lb) {
            c[i] = a[left++];
            continue;
        }
        if (a[left] <= b[right]) { c[i] = a[left++]; }
        else { c[i] = b[right++]; }
    }
    for (i = 0; i < la + lb; i++)
        printf("%d ", c[i]);
    system("pause");

}
