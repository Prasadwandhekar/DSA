#include<iostream>
using namespace std;

class animal{

    public:

      int height;
      int weight;


      void barking(){
         cout<<"dog is barking"<<endl;
      }
};

class dog : public animal {


};

int main(){

    dog d1;

    d1.barking();
    cout<<d1.height<<endl;

    return 0;
}