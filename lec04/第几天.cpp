#include<stdio.h>
int leap(int y) {
	if(y%4!=0)
		return 0;
	if(y%400==0)
		return 1;
	if(y%100==0)
		return 0;
	return 1;
}
int D[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
	printf("%d\n",sizeof(D));
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	int s=0;
	s+=d;
	int i;
	for(i=1; i<m; i++) {
		s+=D[i];
	}
	if(m>2&&leap(y))
		s+=1;
	printf("%d\n",s);

	return 0;
}
