#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&a);
	int w=log10(a)+1;
	printf("%d\n",w);
	f=a%10;a=a/10;
	e=a%10;a/=10;
	d=a%10;a/=10;
	c=a%10;a/=10;
	b=a%10;a/=10;
	if(w==5) {
		printf("%d %d %d %d %d\n",b,c,d,e,f);
		printf("%d%d%d%d%d\n",f,e,d,c,b);
	}
	if(w==4) {
		printf("%d %d %d %d\n",c,d,e,f);
		printf("%d%d%d%d\n",f,e,d,c);
	}
	if(w==3) {
		printf("%d %d %d\n",d,e,f);
		printf("%d%d%d\n",f,e,d);
	}
	if(w==2) {
		printf("%d %d\n",e,f);
		printf("%d%d\n",f,e);
	}
	if(w==1) {
		printf("%d\n",f);
		printf("%d\n",f);
	}
	return 0;
}
