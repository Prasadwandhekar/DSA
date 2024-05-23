#include<iostream>
using namespace  std;

class queue {

    int *arr;
    int size;
    int qfront;
    int rear;
    
    
    queue (){
        size=10001;
        arr = new int[size];
        qfront= 0;
        rear=0;
    }


     void isempty(){
        if(qfront==rear){
            cout<<"queue is full"<<endl;
        }
        else{
            cout<<"queue is not full"<<endl;
        }
    }

     void enqueue(int data){
        if(rear==size){
            cout<<"queue is  full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
     }

     int dequeue(){

        if(qfront ==rear){
            cout<<"queue is empty"<<endl;
            return -1;
        }

        else{

           int ans =arr[qfront];
           arr[qfront]=-1;
           qfront++;

           if(qfront==rear){
            qfront=0;
            rear=0;
           }

           return ans;
           
        }
        

     }

     int  front (){
        if(qfront==rear){
              return -1;

        }
        else {
            return arr[qfront];
        }
     }


     };


     int main(){
           
           queue q(5);

           q.enqueue(10);
           q.enqueue(20);





        return 0;
     }