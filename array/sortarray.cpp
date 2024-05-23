#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cin>>n;

     int arr[n];

    int t=sizeof(arr)/sizeof(arr[0]);

     for(int i=0;i<n;i++){
        cin>>arr[i];

     }

     cout<<"before sorted"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;

     sort(arr,arr+t);

     cout<<"after sorting "<<endl;

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }


    return 0;

}   