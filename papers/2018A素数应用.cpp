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
int main()
{
   int i;
   for(i=1;i+10<=100;i++){
   if(prime(i)&&prime(i+4)&&prime(i+10))
   printf("%d %d %d %d\n",i,i+4,i+10,3*i+14); 
                                         
   }
    system("pause");
    
}
