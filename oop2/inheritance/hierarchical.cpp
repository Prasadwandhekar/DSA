#include<iostream>
using namespace std;

class company {
    
    char com_name[30];
    int year;

    public:
    void getdata();
    void putdata();
   
};

void company::getdata(){

    cout<<"Enter the name of company"<<endl;
    cin>>com_name;
    cout<<"enter the year of company"<<endl;
    cin>>year;

}
void company :: putdata(){

    cout<<"name of company : "<<com_name<<endl;
    cout<<"year of company : "<<year<<endl;
};

class worker : public company{

    char name[30];
    int age;

    public:

    void get(){

        getdata();

        cout<<"enter the name worker "<<endl;
        cin>>name;
        cout<<"enter the age of employe"<<endl;
        cin>>age;

    }
    void put(){
        putdata();
        cout<<"Name of worker : "<<name<<endl;
        cout<<"age of worker : "<<age<<endl;
    }
};

class product : public company{
  
   char pro_name[30];
   float price;

   public:

   void get1(){
    getdata();
    cout<<"name of product"<<endl;
    cin>>pro_name;
    cout<<"product price"<<endl;
    cin>>price;


   }

   void put1(){
    putdata();
    cout<<"name of product :  "<<pro_name<<endl;
    cout<<"product price : "<<price<<endl;
   }

};



int main()
{
    worker w1;
    product p1;

    w1.get();
    w1.put();

    p1.get1();
    p1.put1();
    


    return 0;

}