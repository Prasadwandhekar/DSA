#include<iostream>
using namespace std;

class A {

    public:

    void speak(){
        cout<<" Hello prasad"<<endl;

    }

    int speak(char name){
        cout<<"hello kaustubh"<<endl;
        return 1;

        
    }

    void speak(string name){
        cout<<"Hello "<<name<<endl;
    }
};


int main(){

         A obj;

         obj.speak();


    return 0;
}
/*


#include<iostream>
using namespace std;


int add (int a,int b){

    return a+b;
}

int add (int a ,int b,int c){
    return a+b+c;

}

double add (double a,double b){
    return a+b;
}


int main(){

      cout<<add(10,20)<<endl;
      cout<<add(10,20,30)<<endl;

      cout<<double(10.20)<<endl;

      

    return 0;

}


*/