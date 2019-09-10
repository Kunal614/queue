#include<iostream>
using namespace std;
# define max 5
int A[max];
static int rear=-1;
static int front=-1;
int cirqdel();
int cirqins();
int cirqdisplay();
int main()
{

  int cases;
   while(cases!=5){
cout<<"1.Insert an element\n";
cout<<"2.Delete an element\n";
cout<<"3.Display the queue\n";
cout<<"4.Exit the program\n";
cout<<"Enter your choice\n";

 cin>>cases;
 switch(cases){
    case 1:
          cirqins();
   
break;
case 2:
    cirqdel();

break;
case 3:
     cirqdisplay();
break;
case 4:
exit(0);
default:
cout<<"INVALID ATTEMPT";
}
}

}
int cirqins(){

   if(rear==max && front==0 || rear==front-1){
    cout<<"Overflow\n";
}
else{
      if(rear==max && front!=0){
   rear=0;
cout<<front<<" "<<rear<<endl;
cout<<"Enter the data to be add in the que  :  ";
int k;
cin>>k;
    A[rear]=k;
rear++;
cirqdisplay();

}
else if(rear==-1 && front==-1){
    rear++;
   front++;

cout<<"Enter the data to be add in the que  :  ";
int k;
cin>>k;
    A[rear]=k;
rear++;

cirqdisplay();
}
else{
 cout<<"Enter the data to be add in the que  :  ";
int k;
cin>>k;
    A[rear]=k;
rear++;
cirqdisplay();
}
}

}
int cirqdel(){
    if(front==-1 && rear==-1 || front==rear+1 || front ==rear){
        cout<<"underflow\n";
    }
else{
if(front==rear){
    A[front]=0;
   front=-1;
  rear=-1;
cirqdisplay();
}
    else if(front==max){
  front=0;
  
cirqdisplay();
}
 else{
int item;
item=A[front];

     front++;
cirqdisplay();
}
}

}
int cirqdisplay(){

cout<<"The recent list is : ";
if(front==rear){
    cout<<"empyt\n";
}
else{
     
 for(int i=front;i<rear;i++){

    cout<<A[i]<<" ";
}
}
cout<<endl;

}
