#include<iostream>
using namespace std;
class demo{
	int x,y,z;
	public:
		void getdata(int a, int b, int c){
			x=a;
			y=b;
			z=c;
		}
		void display(){
			cout<<x<<"\n"<<y<<"\n"<<z;
		}
		void operator-();
};
void demo::operator-(){
	x=-x;
	y=-y;
	z=-z;
}
int main(){
	demo d;
	d.getdata(10,-45,70);
	-d;
	d.display();
	return 0;
}