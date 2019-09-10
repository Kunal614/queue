#include<iostream>
using namespace std;
struct node{
  int data;
  node *link;
};
struct node *linkqinsert();
struct node* linkqdelete();
struct node* linkqdisplay(node*);
node *head=NULL;
node *ptr;
int main(){
   cout<<"Enter 1 Insert an element to the queue\n";
cout<<"Enter 2 Delete an element from the queue\n";
cout<<"Enter 3 Display all the elements of the queue\n";
cout<<"enter 4 for exit\n";
int cases;
while(cases!=5){
   cin>>cases;
 switch(cases){
   case 1:
           linkqinsert();
  cout<<"\nEnter the option again\n";
break;
case 2:
       linkqdelete();
cout<<"\nEnter the option again\n";
break;
case 3:
       linkqdisplay(head);
cout<<"\nEnter the option again\n";
      break;
case 4:
  exit(0);
break;
default :
cout<<"INVALID ATTEMPT\n";
cout<<"\nEnter the option again\n";
}   
}
}
struct node *linkqinsert(){
    cout<<"\nenter the item for enqueue\n";
    int k;

   if(head==NULL){
cin>>k;
    node *temp=new node();
    temp->data=k;
  cout<<temp->data<<" is queued to the queue  ,  ";
    temp->link=head;
    head=temp;
ptr=temp; 

}
 else{

cin>>k;
       node *temp=new node();
    temp->data=k;
temp->link=ptr->link;
ptr->link=temp;
ptr=temp;

 } 
linkqdisplay(head);

return head;
}
struct node * linkqdelete()
{
  if(head==NULL){
  cout<<"UNDERFLOW\n";
}
else{
   node *temp=head;
cout<<temp->data<<" is dequeued to the queue  ,  ";
temp->data=0;
   head=temp->link;
}
linkqdisplay(head);
return head;
    }
struct node* linkqdisplay(node*){
  node *temp=head;
   cout<<"The list is : ";
if(temp==NULL){
  cout<<" Empty\n";
}
while(temp!=NULL){
   cout<<temp->data<<" ";
  temp=temp->link;
}
free(temp);

}





