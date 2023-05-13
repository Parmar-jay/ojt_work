#include<iostream>
using namespace std;
class set{
	int m,n;
	public:
		void input();
		void display();
		void largest();
};
void set::input(){
	cout<<"Enter the value of m: ";
	cin>>m;
	cout<<"Enter the value of n: ";
	cin>>n;
}
void set::largest(){
	if(m>n){
		cout<<"m is the largest number.";
	}
	else{
		cout<<"n is the largest number.";
	}
}
int main(){
	set s;
	s.input();
	s.largest();
	return 0;
}