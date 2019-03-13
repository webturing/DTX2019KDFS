#include<stdio.h>
int prime(int n) {
	int i;
	for(i=2; i<n; i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main() {
	printf("%d\n",1==prime(2));
	printf("%d\n",0==prime(9));
	printf("%d\n",1==prime(17));
	int x=3;
	if(4=x)
		printf("ABC");
	return 0;
}
