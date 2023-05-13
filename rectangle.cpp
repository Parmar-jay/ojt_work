#include<iostream>
using namespace std;
class rectangle{
	float l,b;
	public:
		
		void findarea();
	    void display();
	
};
void rectangle::findarea(){
	cout<<"Enter the length of rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of reactangle: ";
	cin>>b;
}
void rectangle::display(){
	int a;
	a=l*b;
	cout<<"The area of reactangle is:  "<<a;
}
int main(){
	rectangle r;
	r.findarea();
	r.display();
	return 0;
}