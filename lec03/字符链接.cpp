#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]="foot";
	char b[100]="ball";
//	int i;
//	for(i=0;a[i]!=0;i++);
//	int j;
//	for(j=0;b[j]!=0;j++)
//	  a[i+j]=b[j];
//	a[i+j]=0;
	//strcat(a,b);
	strcpy(a+strlen(a),b);
	
	printf("%s\n",a);
 } 
