#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int prime(int n){
    if(n==2)return 1;
    if(n<2||n%2==0)return 0;
    int c;
    for(c=3;c*c<=n;c+=2)if(n%c==0)return 0;     
    return 1; 
}
void even(int n)
{
     int p;
     for(p=3;p<=n/2;p+=2)
     {
                         int q=n-p;
     if(prime(p)&&prime(q)){
                            printf("%d=%d+%d\n",n,p,q);
                         }
 } 
}
int main()
{
    even(10);
    system("pause");
    
}
