#include<iostream>
using namespace std;
class company {
   char com_name[30];
   int year;

   public:
     void getdata();
     void putdata();

};

void company :: getdata()
{
    cout<<"enter name of company"<<endl;
    cin>>com_name;
    cout<<"enter year of company"<<endl;
    cin>>year;

}

void company :: putdata()
{
    cout<<"name of company : "<<com_name;
    cout<<"year of company : "<<year;

}

class worker1 : public company{

  char name[30];
  int age;

  public:

     void get(){
        getdata();

         cout<<"enter the name of company"<<endl;
         cin>>name;
         cout<<"age of worker"<<endl;
         cin>>age;


     }

     void put(){
        putdata();

        cout<<"name of worker : "<<name;
        cout<<" age of worker : "<<age;
     }

};

class worker2 : public company{


};


int main(){

      worker2 w1;

      w1.getdata();
      w1.putdata();

      worker1 w2;

      w2.get();
      w2.put();

    return 0;
}





