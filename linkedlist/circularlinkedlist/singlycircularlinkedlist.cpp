#include<bits/stdc++.h>
using namespace std;

class node {

   public:
      int data;
      node* next;

      node(int d){

        this->data=d;
        this->next=NULL;
      }

      ~node(){

        int value = this->data;

        if(this->next!=NULL){
            delete next;

            next=NULL;

        }
        cout<<"Memeory free for the data value"<<value<<endl;
      }


};


void insertnode(node* &tail,int element ,int d){

    //empty list
    if(tail==NULL){
        node* newnode= new node(d);
        tail=newnode;
        newnode->next=newnode;

    }

    //non empty list
    else{
    node* curr = tail;

    while(curr->data!=element ){
        curr=curr->next;
    }
     
    //  curr assuming element wala node 

    node* temp = new node(d);
    temp->next=curr->next;
    curr->next=temp;
    }

    cout<<endl;
}



void display(node* &tail ){

    node* temp =tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;

    }

    do{

        cout<<tail->data<<"->";
        tail=tail->next;


    }while(tail!=temp);

    cout<<endl;
}

void deletenode(node* &tail,int value){

    //empty list 
    if(tail==NULL){
        cout<<"List not empty please check again"<<endl;
        return;
    }

    else{
        //non empty

        //assuming list is non empty

        node* prev = tail;
        node* curr = prev->next;

        while(curr->data !=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next =  curr->next;
        
        //1 node linked list
        if(curr==prev){
            tail=NULL;
        }

        if(tail==curr){
            tail=prev;
        }
        
        //>=2 node linked list
        curr->next=NULL;
        delete curr;



           cout<<endl;
    }
     





}










int main(){

     node* tail = NULL;

     insertnode(tail,5,20);
     display(tail);

     insertnode(tail,20,30);
     display(tail);

     insertnode(tail,30,40);
     display(tail);

    insertnode(tail,40,10);
     display(tail);

     deletenode(tail,40);
     display (tail);
           

    return 0;
}