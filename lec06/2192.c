#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct person {
    char name[20];
    int count;
    struct person *next;
};
int main()
{   
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
    char name[20];
    scanf("%s",name);     
    int j;
    for(j=0;j<3;j++)
    if(strcmp(name,leader[j].name)==0)
    leader[j].count++;
    }
    for(i=0;i<3;i++)
    {
        printf("%s:%d\n",leader[i].name,leader[i].count);
                    }
    //system("pause");
    return 0;
}
