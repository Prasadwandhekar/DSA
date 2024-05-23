#include<iostream>
using namespace std;

class node {

      public:
       int data ;
       node* next;
       node* prev;

        node(int d){

            this->data=d;
            this->next=NULL;
            this->prev=NULL;
       }

           ~node(){
        int value = this->data;

        //memeory free 
        if(next!=NULL){
            delete next;

            next = NULL;
        }
        cout<<"Memery free for node with data"<<value<<endl;
    }

};

 void insertathead(node* &tail,node* &head ,int d){
  
  if(head==NULL){
    node* temp=new node(d);
    head=temp;
    tail=temp;    
  }

  else{
    node* temp =new node(d);
    temp->next = head;

    head->prev = temp;
    head=temp;
  }
 }

 void insertattail(node* &tail,node* &head,int d){
   
   if(tail==NULL){
     node* temp=new node(d);
      tail= temp;
      head=temp;
   }
   else{
    node* temp=new node(d);
     
    tail->next = temp;
    temp->prev=tail;
    tail=temp;
   }
     
 }

void insertatposition(node* &tail  ,node* &head , int position  ,int d  ){

    //insert at head
    if(position==1){
        insertathead(tail,head,d);
        return ;
    }

    node* temp=head;
    int cnt=1;

    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at last node
    if(temp->next== NULL){
        insertattail(tail,head,d);
        return ;
    }

   // creating node for d 
   node* nodetoinsert = new node(d);

   nodetoinsert->next = temp->next;
   temp->next->prev=nodetoinsert;
   temp->next = nodetoinsert;
   nodetoinsert->prev = temp;


}

void deletenode(node* &head ,int position){


   //delete first position
   if(position ==1){
       node* temp=head;
       temp->next->prev=NULL;
       head=temp->next;
       temp->next = NULL;    

       //memery free start node
        delete temp;
   }

   else
   {
    //deleting at any position  and last position

    node* curr = head;
    node* prev =NULL;

      
      int cnt=1;
      while(cnt< position){

        prev = curr;
        curr=curr->next;
        cnt++;
      }
   

   curr->prev=NULL;
   prev->next= curr->next;
   curr->next= NULL;
   delete curr;
   }
   cout<<endl;
}










void display (node* &head ){

    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<endl;
}


int getlength(node* &head){

int len=0;
   node* temp=head;

   while(temp!=NULL){
      len++;
      temp=temp->next;
   }
   return len;



}





int main(){

   // node* node1=new node(10);

    node* head =NULL;
    node* tail =NULL;

    display(head);

    cout<<getlength(head);

    insertathead(tail,head,11);
    display(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertathead(tail,head,13);
    display(head);  

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertathead(tail,head,8);
    display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertattail(tail,head,25);
    display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertatposition(tail,head,2,100);
    display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertatposition(tail,head,1,101);
    display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertatposition(tail,head,7,102);
    display(head);
  
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

   deletenode(head,1);
   display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

   

    return 0;
}