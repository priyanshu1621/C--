#include<iostream>
using namespace std;

int main(){
	int n,c=0,i=0;
	cout<<"Enter the NUMBER: ";
	cin>>n;

for(i=2; i<=n; i++){
	if(n%i==0){
		c++;
	    }
}

	if(c==1){
		cout<<"Prime number";
		}
	else{

		cout<<"Not Prime";
		}
}