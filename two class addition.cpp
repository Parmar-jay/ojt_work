#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void seta(){
			cout<<"Enter the number: ";
			cin>>a;
			
		}
		
};
class B{
	public:
		int b;
		void setb(){
			cout<<"Enter the second number: ";
			cin>>b;
		}
};
int add(A y, B z){
	return (y.a+z.b);
}
int main(){
	A y;
	B z;
	y.seta();
	z.setb();
	cout<<"Addition is: "<<add(y,z);
	return 0;
}