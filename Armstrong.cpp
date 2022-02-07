#include<iostream>
using namespace std;
int main(){
	int n, rem , sum = 0 ;
	cout<<"Enter num: ";
	cin>>n;
		int temp = n;
	for(int i = 0 ; i< n ; i++){
		rem = n %10;
		sum = sum + (rem*rem*rem);
		n = n/10;
		}

if(temp==sum){

cout<<"Armstrong";}
else{
cout<<"Not Armstrong";}

return 0;}