#include<iostream>
using namespace std;

bool palindrome(string str,int i,int j)
{
	
   
   if(i>j)
	 return true;
	 
	if(str[i]!=str[j])
	{
		return false;
	 } 
	 
	 return palindrome(str,i+1,j-1);
}

int main()
{
	string name;
   cin>>name;
	
    bool ispalindrome =palindrome(name,0,name.length()-1);
	
	if(ispalindrome)
	{
		cout<<"it is a palindrome"<<endl;
	}
	
	else
	{
		cout<<"it is not a palindrome"<<endl;
	}
	
	return 0;
}