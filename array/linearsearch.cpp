#include<bits/stdc++.h>
using namespace std;


 int  linearsearch(vector<int> &arr,int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key is present"<<endl;
            return i;
         
        }
        
    }
    cout<<"key is NOt present "<<endl;
    return -1;
       

     
       
    

}



int main(){

    vector<int > arr = {1,2,3,4,5};

    int n=5;

    int  ans=linearsearch(arr,n,0);

    cout<<ans<<" ";


    


    return 0;
}