#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char s[100];
   scanf("%s",s);
   char *p=s;
   for(;*p;p++)
   {
               if('a'<=*p&&*p<='z') *p-=32; 
               }
   puts(s);
   int k=3;
   for(p=s;*p;p++){
   if('A'<=*p&&*p<='Z') {
   int q=*p-'A';
   q=(q+k)%26;
   *p='A'+q;
} } 
  puts(s);
   
    system("pause");
    
}
