#include<iostream>
using namespace std;

int main(){

	int n, rem , sum =0;
cout<<"Enter num: ";
cin>>n;

int temp = n;
while(temp>0){
	rem = temp % 10;
	sum = sum*10 + rem;
	temp /=10;
}
	if(sum == n){
		cout<<"Palindrome";	
	}
	else{
		cout<<" NOT Palindrome";
	}

return 0;
}