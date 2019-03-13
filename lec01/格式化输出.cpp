#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	putchar('A');putchar(65);// char int(0~255)
	putchar('a');putchar('A'+32);putchar(97);
	putchar('\n');
	puts("Hello world");puts("Hello world");
	puts("");
	
	printf("%c",97);
	printf("%s","hello world");
	printf("Hello world");
	printf("\n");
	
	return 0;
}
