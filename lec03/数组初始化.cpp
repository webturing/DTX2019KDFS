#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
void print(int a[],int n){
	//printf("*********%d********\n",sizeof(a));
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n"); 
}
int main()
{
	int a[10];//未初始化
	print(a,10); 
	int b[5]={1,2,3,4,5,};//完全初始化
	print(b,5);
	//	int c[3]={1,2,3,4};//编译错误 
	int d[5]={1,2,};//部分初始化 未指定的部分都是该类型的零值 
	print(d,5);
	int e[]={1,2,3,4,123,1,23,12,3,12,31,23,12,3123};
	int m=sizeof(e)/sizeof(e[0]);
	print(e,m);
	int f[10]={0};
//	int i;
//	for(i=0;i<m;i++)e[i]=0;
	memset(e,-1,sizeof(e));//逐字节置0 
	print(e,m);
	

}
