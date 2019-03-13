#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    freopen("input2.txt","r",stdin);
    freopen("output2.txt","w",stdout);
 char t[100][100];
 char s[100];
 int i=0;
 while(1==scanf("%s",s))
 {
  char w[100];
  char *p=s,*q=w;
  while(*p)
  {
           if('a'<=*p&&*p<='z')
           {
                               *q=*p;
                               q++;
                               p++;
           } 
    if(*p==','||*p=='.')
    {
      *q=0;
      if(strlen(w)>0)
                     strcpy(t[i++],w);
      q=w;
      p++;
    }
  }
  
 }
 int j;
 for(j=0;j<i;j++)
 printf("%s ",t[j]);
system("pause");
    
}
