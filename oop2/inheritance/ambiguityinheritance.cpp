#include<iostream>
using namespace std;

class company{

     char com_name[30];
     int year;

     public:
       void getdata();
       void putdata();   

};

void company::getdata(){

    cout<<"enter the name company : "<<endl;
    cin>>com_name;
    cout<<"enter the year of company : "<<endl;
    cin>>year;

}

void company :: putdata(){

    cout<<" Name of company is : "<<com_name<<endl;;
    cout<<"Year of company is : "<<year<<endl;
}

class worker {

    char name[30];
    int age;

    public:
    void getdata()
    {
        cout<<"Enter the name of employ :"<<endl;
        cin>>name;
        cout<<"enter the age of employ"<<endl;
        cin>>age;


    }
    void putdata()
    {
        cout<<" name of employ : "<<name<<endl;
        cout<<"age of employ : "<<age<<endl;
    }
};

class product : public company ,public worker{

      char prod_name[30];
      float price;

      public:
     
      void get1(){
       // getdata();
       // get();
        cout<<"enter the product name"<<endl;
        cin>>prod_name;
        cout<<"enter price of product"<<endl;
        cin>>price;
      }

      void put1(){
       // putdata();
       // put();
        cout<<"product name is : "<<prod_name<<endl;
        cout<<"price of product is : "<<price<<endl;
      }
     
};

int main(){

      
      product p1;

      p1.get1();
       p1.company::getdata();
       p1.worker::getdata();
  
        p1.company::putdata();
        p1.company::putdata();
       p1.put1();


    return 0;

}