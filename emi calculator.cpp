#include<iostream>
using namespace std;
class emi{
    float r,p,e,n;
	public:
		void getdata();
		void formula();
		void show();
};
void emi::getdata(){
	cout<<"Enter the principle amount: ";
	cin>>p;
	cout<<"Enter the rate of intrest annually: ";
	cin>>r;
	cout<<"Enter the number of months: ";
	cin>>n;
}
void emi::formula(int pow){
	e=p*r*pow(1+r,n)/(pow(1+r,n)-1);
}
void emi::show(){
	cout<<"The emi you pay monthly is: "<<e;
}
int main(){
	emi x;
	x.getdata();
	x.formula();
	x.show();
	return 0;
}