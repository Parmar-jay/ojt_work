#include<iostream>
using namespace std;
class complex{
	int real,image;
	public:
		complex(){
			real=0;
			image=0;
		}
		complex(int x, int y){
			real=x;
			image=y;
		}
		void display(){
			cout<<real<<"+j"<<image<<"\n";
		}
		complex operator + (complex c);
};

complex complex::operator +(complex c)
{
	complex temp;
	temp.real=real+c.real;
	temp.image=image+c.image;
	return temp;
}
int main(){
	complex c1(4,12),c2(14,23),c3;
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}