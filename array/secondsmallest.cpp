#include<bits/stdc++.h>
using namespace std;



int main(){


    int n;
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int smallest=arr[0];
    int secondsmallest=INT_MAX;

    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
           // secondsmallest=smallest;
            smallest=arr[i];
        }
    }
     
     for(int i=1;i<n;i++){
        if(arr[i]<secondsmallest && arr[i]!=smallest){
              secondsmallest=arr[i];
        }
     }

    cout<<"Smallest element in array "<<endl;
    cout<<smallest<<endl;

    cout<<"Second smallest element in array "<<endl;
    cout<<secondsmallest;





    return 0;
}     
 
  
   
    
     
      

       
        
         
           
             
               
                
                 
                  
                   
                    
                     
                      
                        
                         
                          
                           
                            
                             





























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































