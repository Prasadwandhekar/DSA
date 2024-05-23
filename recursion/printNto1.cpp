#include<iostream>
using namespace std;

void print (int i,int t){ 
	
	if(i<1)
	return ;
	
	cout<<i<<endl;;
	print(i-1,t);
	
}





int main (){
	
	int t;
	cin>>t;
	
	print (t,t);
}