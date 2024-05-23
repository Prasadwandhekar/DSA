#include<iostream>
using namespace std;

int  fib(int n){
    
    if(n<=1){

        return n;
    }

    n=fib(n-1) + fib(n-2);
        
        return n;


}

int main(){

      int n;
      cin>>n;

      int ans =fib(n);
      cout<<ans<<endl;



       return 0;


}