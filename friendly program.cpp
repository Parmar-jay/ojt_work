#include<iostream>
using namespace std;
class B;
class A{
	private:
		int numA;
		public:
			void setA(){
				numA=17;
			}    friend int add(A,B);
};
class B{
	private:
		int numB;
		public:
			void setB(){
				numB=17;
			}friend int add(A,B);
};
int add(A a,B b){
	return (a.numA+b.numB);
}
int main(){
	A a;
	B b;
	a.setA();
	b.setB();
	cout<<"Addition is: "<<add(a,b);
	return 0;
	
}