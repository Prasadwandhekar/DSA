#include<bits/stdc++.h>
using namespace std;

int removedublicates(int *arr ,int t){

   int i=0;
   for(int j=1;j<t;j++){
      if(arr[i]!=arr[j]){
        i++;
        arr[i]=arr[j];
      }
   }

     return i+1;
}




int main(){


    int arr[]={1,1,2,2,3,3,3,4,4};
    

    int t=sizeof(arr)/sizeof(arr[0]);

    int k=removedublicates(arr,t);

    cout<<" remove dublicates"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }








    return 0;
}