#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print(int a[], int n) {
    //printf("*********%d********\n",sizeof(a));
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[10];//δ��ʼ��
    print(a, 10);
    int b[5] = {1, 2, 3, 4, 5,};//��ȫ��ʼ��
    print(b, 5);
    //	int c[3]={1,2,3,4};//�������
    int d[5] = {1, 2,};//���ֳ�ʼ�� δָ���Ĳ��ֶ��Ǹ����͵���ֵ
    print(d, 5);
    int e[] = {1, 2, 3, 4, 123, 1, 23, 12, 3, 12, 31, 23, 12, 3123};
    int m = sizeof(e) / sizeof(e[0]);
    print(e, m);
    int f[10] = {0};
//	int i;
//	for(i=0;i<m;i++)e[i]=0;
    memset(e, -1, sizeof(e));//���ֽ���0
    print(e, m);


}
