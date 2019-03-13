#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	//2019/03/09 09:31:01
	//1970/1/1 0:0:0
	int y,m,d,hh,mm,ss;
	scanf("%d/%d/%d %d:%d:%d",&y,&m,&d,&hh,&mm,&ss);
	printf("%d %d %d %d %d %d\n",y,m,d,hh,mm,ss);
	int t=0;
	t+=365*(y-1970)*24*3600;
	t+=m*30*24*3600;
	t+=hh*3600;
	t+=mm*60;
	t+=ss;
	printf("%d\n",t);
	return 0;
}
