#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(){
			
		}
		number(int num){
			a=num;
		}
		number(number &obj){
			cout<<"Copy constructo is called :"<<endl;
			a=obj.a;
		}
		void display();
};
void number::display(){
	cout<<"Enter the number :"<<a;
}
int main(){
	number x;
	number y(39);
	number z(90);
	x.display();
	y.display();
	z.display();
	number z1(z);
	z1.display();
	return 0;
}