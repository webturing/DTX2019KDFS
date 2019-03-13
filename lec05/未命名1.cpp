#include<stdio.h>
void strcpy(char*s, char*t){
	while(*s++=*t++);
}
void strcat(char *to, char*from){
	while(*to)++to;
	while(*to++=*from++);
}
int strcmp(char*s,char*t){
	while(*s||*t){
		if(*s!=*t)return *s-*t;
		s++;
		t++;
	}
	return *s-*t; 
}
int main(){
	char a[100]="hello world";
	char b[100];
	strcpy(b,a);
	puts(b);
	strcat(b,a);
	puts(b);
	printf("%d\n",strcmp(a,b));
	printf("%d\n",strcmp(b,a));
	printf("%d\n",strcmp(b,b));
    return 0;
} 
