#include<stdio.h>
#include<string.h>

int main() {
	char a[100]="apple",b[100]="banana",c[100]="kiwi";
	char d[100];
	strcpy(d,a);
	if(strcmp(b,d)>0)
	strcpy(d,b);
	if(strcmp(c,d)>0)
	strcpy(d,c);
	puts(d);
	return 0;
}
