#include<bits/stdc++.h>
using namespace std;

void print(int ind ,vector<int> &ds,int arr[],int n){

      if(ind ==   n){
        for(auto it : ds){
        cout<< it <<" ";
       }
       if(ds.size()==0){
        cout<<"{}";
       }
       cout<<endl;

       return;
      }

         // Not pick and this element is not added to subsequences 

         print(ind+1,ds,arr,n);

         //pick and this element is added to subsequences 

          ds.push_back(arr[ind]);
          print(ind+1,ds,arr,n);       
          ds.pop_back();
       

}





int main(){

    int arr[]={3,1,2};
    int n=3;

    vector<int> ds;

   cout<< printf(0,ds,arr, n)<<endl;


    return 0;
}