#include<iostream>
using namespace std;
int main(){
	double i,n,count;
	cout<<"Enter the value: ";
	cin>>n;
do{
	n/10;
	count++;
}
while(n=!0);
   cout<<"Digits: "<<count;

	return 0;
}