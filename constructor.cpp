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
		void display();
};
void number::display(){
	cout<<"Number is :"<<a;
	
}
int main(){
	number x;
	number y;
	number z(40);
	x.display();
	y.display();
	z.display();
	return 0;
}