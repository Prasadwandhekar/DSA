#include<bits/stdc++.h>
using namespace std;

void solve (int *arr ,int n){

   int temp =  arr[0];

   for (int i =1;i<n;i++){

    arr[i-1]=arr[i];
   }

   arr[n-1]=temp;

   for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
     
}




int main(){

    int n=5;

    int arr[]={3,6,7,8,9};

    solve(arr,n);


    return 0;

}