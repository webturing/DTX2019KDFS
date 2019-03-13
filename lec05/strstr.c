#include<stdio.h>
#include<string.h>
int main(){
	char a[100]="hello world";
	char b[10]="llo";
	char *p=strstr(a,b);
	if(p!=NULL){
		printf("%d\n",p-a);
	}else{
		printf("NOT FOUND!");
	}
	if(strcmp(a,b)==0){
		puts("EQUAL");
	}
	
    return 0;
} 
