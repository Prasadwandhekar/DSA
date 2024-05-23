#include<iostream>
using namespace std;

class parent {

      public :

      void show(){

        cout<<"Parent class called "<<endl;
      }
};

class subclass1 : public parent {

      public :
 
};

class subclass2 : public parent {
       
       public :

       void show(){
        cout<<"subclass2 is called "<<endl;
       }
};





int main (){

       subclass1 s1;

       subclass2 s2;

       s1.show();
       s2.show();




    return 0;
}
