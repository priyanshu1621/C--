#include<iostream>
using namespace std;
int main(){
	
	int n=0,fact = 1 ;

	cout<<"Enter the num: "<<endl;
	cin>>n;
	
	for(int i =n; i>1; i--){
		
	fact = fact * n;
	     n--;
	      }
	cout<<fact<<endl;
return 0;
}