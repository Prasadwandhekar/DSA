#include<iostream>
using namespace std;

class A {
        
        public:

        int a;
        int b;

        int add(){
            return a+b;
        }

         void operator+( A &obj){
             
             int value1=this->a;
             int value2=obj.a;

             cout<<"output"<<value2-value1<<endl;

         }
};

int main(){

     A obj1;
     A obj2;

     obj1.a=10;
     obj2.a=20;

     obj1 + obj2 ;

    return 0;

}