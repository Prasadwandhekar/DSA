#include<bits/stdc++.h>
using namespace std;

vector<int>  movezeros(vector <int>arr ,int n){
    int j=-1;

    for(int i=0;i<n;i++){
         if(arr[i]==0){
            j=i;
            break;
         }

    }

     if (j ==-1) return arr;

    for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
    }
    return arr;

}




int main (){
     
      vector<int>  arr = {1,2,0,3,4,5,0,6,7,0,5,0,5};
      int n=13;

      vector<int > ans=movezeros(arr,n);

      for(auto &it : ans){
        cout<<it<<" ";
      }cout<<endl;





    return 0;

}