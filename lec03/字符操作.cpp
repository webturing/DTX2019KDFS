#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]="apple";
	char b[100];
	int i;
	for(i=0;;i++)
	{
		b[i]=a[i];
		if(a[i]=='\0')
		break;
	}

	puts(b);
	
	strcpy(b,a);	//b=a;
	puts(b);
	
 } 
