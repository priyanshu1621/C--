#include<iostream>
using namespace std;
int main(){

string n1,n2;

 cout<<"Enter the String";
 getline(cin,n1);

//cout<<"Enter the Second String";
//cin>>n2;

string temp = n1;

n1= n2;
n2= temp;

cout<<n1<<endl;
cout<<n2;
}