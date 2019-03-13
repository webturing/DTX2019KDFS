#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Node {
       int data;
       struct Node*next;
}* head; 
void print(){
     struct Node* p=head;
     while(p!=NULL)
     {
     printf("%d ",p->data);p=p->next;
     } 
     printf("\n");
}
void add(int number){
     struct Node *p=(struct Node*)malloc(sizeof(struct Node));
     p->data=number;
     p->next=head;
     head=p;
}
struct Node* pop(struct Node *p,int k)
{
     struct Node* q=p;
     int j=k-1;
     while(j--)
     {
      if(q->next!=NULL){
                        q=q->next;
                        }
      else q=head;
     }
     //delete q->next;
     if(q->next==head){
                       head=head->next;
                       return head;
                       }
     else if(q->next->next==NULL){
         q->next=NULL;
         return head;
     }else{
           q->next=q->next->next;
           return q->next;
           }
    
     
}
int main()
{
   int i;
   for(i=8;i>=1;i--)
   {
    add(i);
    
   }
   print();
   struct Node* p=head;
   for(i=0;i<7;i++)
   {
    p=pop(p,3);
    print();
   }
    
system("pause");
    
}
