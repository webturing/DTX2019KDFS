#include<stdio.h>
int main()
{
	char s[4]={'b','o','y'};
	/*
	int i;
	for(i=0;i<10;i++){
		if(s[i]=='\0')break;
		putchar(s[i]);
		
	}
	*/
	printf("%s",s);
	puts(s);
	char t[]="boy";
	puts(t);
	printf("%d\n",sizeof(t));
	scanf("%s",t);
 } 
