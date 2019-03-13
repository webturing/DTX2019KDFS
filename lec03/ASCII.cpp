#include<stdio.h>
int main()
{
	char s;
	s=getchar();
	if('A'<=s&&s<='Z'){
		printf("OK");
	}else
	{
		printf("FAIL");
	}
 } 
