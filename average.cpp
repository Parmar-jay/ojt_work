#include<iostream>
using namespace std;
int main(){
	float num[100],sum,average;
	int i,n;
	cout<<"Enter the number of sums: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<i+1<<"Enter the number for addition: ";
		cin>>num[i];
		sum+=num[i];
	}
	average=sum/n;
	cout<<"\n average is:- "<<average;
	return 0;
	}