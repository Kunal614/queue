#include<iostream>
#include<bits/stdc++.h>
using std::cin;
using std::cout;
# define max 10
int A[max];
static int right=-1;
static int left=-1;
int display();
int delrt();
int delleft();
int insrt();
int insleft();
int main()
{
     cout<<"Enter 1 for add form right\n";
cout<<"Enter 2 for add form left\n";
cout<<"Enter 3 for delete form left\n"; 
cout<<"Enter 4 for delete form right\n";   
cout<<"Enter 5 for exit\n";
int cases;
while(cases!=6){
       cin>>cases;
      switch(cases){
             case 1:
                    insrt();
                      cout<<"again choose from an option\n";
break;
            case 2:
                    insleft();
                     cout<<"again choose from an option\n";
break;
           case 3:
                  delleft();
                    cout<<"again choose from an option\n";
break;
          case 4:
            delrt();
              cout<<"again choose from an option\n";
break;
         case 5:
             exit(0);
break;
default:
cout<<"invalid attempt \n"<<"Enter the number again\n";
}

}
}
int insrt(){
    int k;
 
    if(right==max-1 && left==0 || right==left-1){
     cout<<"Overflow\n";

}
     else{
           if(right==-1 && left==-1){
                  cout<<"Enter the element of the  : ";
                      cin>>k;
                      right=0;
                     left=0;
                   A[right]=k;
                  display();
}
   else if(right==max-1 && left!=0){
        right=0;
           cout<<"Enter the element of the  : ";
           cin>>k;
           A[right]=k;
            display();
}
  else{
          right++;
          cout<<"Enter the element of the  : ";
         cin>>k;
           A[right]=k;
          display();
}
}
}
int insleft(){
         int k;
   if(left==max-1 && right==0){
  cout<<"Overflow\n";

          }
       if(left==-1 && right==-1){
            right=0;
             left=0;
cout<<"Enter the element of the  : ";
              cin>>k;
              A[left]=k;
              left=max-1;
display();
}
         if(left==0){
              cout<<"Enter the element of the  : ";
              cin>>k;
              A[left]=k;
              left=max-1;
display();

                     }
    else{
         cout<<"Enter the element of the  : ";
        cin>>k;
        A[left]=k;
       left--;
display();
             }
              
     
}
int delleft()
{
    if(left==-1 && right==-1 || left==right+1){
               cout<<"Underflow\n";
}
   if(left==right){
         left=-1;
            right=-1;
}
   else{
          int item;
       item=A[left];
       left++;
display();
}

}
int delrt()
{
    if(left==-1 && right==-1){
         cout<<"Underflow\n";
}
    if(right==left-1){
         cout<<"no element at right for deletion\n";

}
   if(right==left){
    int item;
    item=A[right];
   left=-1;
    right=-1;
display();
}
   else{
      int item;
      item=A[right];
      right--;
display();
    }
}
int display(){
      if(left==-1 && right==-1){
        cout<<"The list is empty\n";
}
      else{ 
     cout<<"The list is :  ";
     if(right>left){
      for(int i=left;i<=right;i++){
       cout<<A[i]<<" ";
}
else if(left==max-1){
     cout<<A[max-1];
     

}
}
cout<<"\n";
}
return 0;
}
















