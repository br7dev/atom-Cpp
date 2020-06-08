#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   node *next;
   // node *head=NULL;
   // node *tail=NULL;
}*head, *tail;


void createnode(int value)
{
   node *temp=new node;
   temp->data=value;
   temp->next=NULL;
   if(head==NULL)
   {
      head=temp;
      tail=temp;
      temp=NULL;
   }
   else
   {
      tail->next=temp;
      tail=temp;
    }
}
void insert_start(int value)
{
   node *temp=new node;
   temp->data=value;
   temp->next=head;
   head=temp;
}
void insert_position(int pos, int value)
{
   node *pre=new node;
   node *cur=new node;
   node *temp=new node;
   cur=head;
   for(int i=1;i<pos;i++)
   {
     pre=cur;
     cur=cur->next;
   }
   temp->data=value;
   pre->next=temp;
   temp->next=cur;
}


void display()
 {
   node *temp=new node;
   temp=head;
   while(temp!=NULL)
   {
     cout<<temp->data<<"\t";
     temp=temp->next;
   }
 }

 int main()
{

   createnode(10);
   createnode(20);
   createnode(60);
   createnode(30);
   insert_start(100);
   display();

}
