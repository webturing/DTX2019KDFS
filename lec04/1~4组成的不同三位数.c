# include<stdio.h>
int main()
{
    int n,cnt=0,a,b,c;
    for(n=123;n<=432;n++){
    	int m=n; 
    	c=m%10;m/=10;
    	b=m%10;m/=10;
    	a=m%10;
    	if(1<=a&&a<=4
			&&1<=b&&b<=4
			&&1<=c&&c<=4
			&&a!=b&&b!=c&&c!=a)
    		{
	    		printf("%d%d%d\n",a,b,c);
				cnt++;	
			}
	}
	printf("%d\n",cnt);
    return 0;
} 
