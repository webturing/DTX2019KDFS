# include<stdio.h>
int ok(int n) {
	int a,b,c;
	c=n%10;
	n/=10;
	b=n%10;
	n/=10;
	a=n%10;
	return
	    1<=a&&a<=4
	    &&1<=b&&b<=4
	    &&1<=c&&c<=4
	    &&a!=b&&b!=c&&c!=a;
}
int main() {
	int n,cnt=0;
	for(n=123; n<=432; n++) {
		if(ok(n)) {
			printf("%d\n",n);
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
