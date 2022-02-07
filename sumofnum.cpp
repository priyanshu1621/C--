#include<iostream>
using namespace std;
int main(){
	int n,rem ,sum = 0 ;
cout<<"Enter num";
cin>>n;

while(n>0){
	rem = n %10;
	sum += rem ;
	n /=10; 
}

cout<<"sum is: "<<sum;
return 0;}