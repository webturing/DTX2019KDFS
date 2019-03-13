#include<stdio.h>
int leap(int y) {
	return y%4==0&&y%100!=0||y%400==0; 
}
int main() {
	printf("%d\n",1==leap(2012));
	printf("%d\n",0==leap(2011));
	printf("%d\n",0==leap(1900));
	printf("%d\n",1==leap(2000));
	return 0;
}
