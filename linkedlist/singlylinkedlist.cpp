#include<bits/stdc++.h>
using namespace std;


class node {
       
       public:
       int data;
       node* next;

    node (int data){
        this->data=data;
        this->next=NULL;
    }
     
     //destructor
    ~node(){
        int value = this->data;

        //memeory free 
        if(this->next!=NULL){
            delete next;

            this->next = NULL;
        }
        cout<<"Memery free for node with data"<<value<<endl;
    }
};

void insertathead(node* &head ,int d ){

    node *temp = new node(d);
    temp->next = head;
     head = temp;
cout<<endl;
}

void insertattail(node* &tail ,int d){

    node *temp =new node(d);
    tail->next=temp;
    tail=tail->next;

cout<<endl;
}





void insertatposition (node* &tail,node* &head,int position,int d ){


  //insert at head position
   if(position ==1){
      insertathead(head,d);
      return;
   }

  // insert at reaming position
    node* temp = head;
    int cnt =1;



    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
     

     //insert at tail position 
   if(temp->next==NULL){
         insertattail(tail,d);
     return ;
   }


    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;


    cout<<endl;

}










void display (node* &head){

     node *temp = head;

     while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    
     }
     cout<<endl;
}


void deletenode(node* &head ,int position){


   //delete first position
   if(position ==1){
       node* temp=head;
       head = head ->next;
    

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
   

   prev->next = curr ->next;
   curr->next = NULL;
   delete curr;
   }
   cout<<endl;
}


bool search(node* &head ,int position)
{
	node* temp=head;
	while(temp!=NULL)
	{
		if (temp->data==position)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}





int main(){

     node* node1 = new node(20);

     node* head=node1;
     node* tail=node1;

     insertathead(head,10);
     display(head);

    insertattail(tail,30);
    display(head);

    insertatposition(tail,head,4,40);
    display(head);

   insertattail(tail,50);
   display(head);
       
       cout<<"Head"<<head->data<<endl;
       cout<<"Tail"<<tail->data<<endl;

     
     cout<<search(head,3)<<endl;
     display(head);




       deletenode(head,3);
       display(head);



    return 0;
}