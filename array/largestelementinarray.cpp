#include<iostream>
using namespace std;
#include<vector>

int main(){

     int n;
     cin>>n;

     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int largest =arr[0];

     for(int i=0;i<n;i++){

        if(arr[i]>largest){
            largest=arr[i];
        }
     }
     cout<<"Largest element is "<<endl;
     cout<<largest<<endl;


    return 0;
}