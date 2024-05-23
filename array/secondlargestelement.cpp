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

     int secondlarge=-1;

     for(int i=0;i<n;i++){

        if(arr[i]>secondlarge && arr[i]!=largest){
            secondlarge=arr[i];
        }
     }





     cout<<"Largest element is "<<endl;
     cout<<largest<<endl;

     cout<<"Second largest element is"<<endl;
     cout<<secondlarge<<endl;


    return 0;
}