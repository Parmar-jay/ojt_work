#include<iostream>
using namespace std;
class B{
	int a;
	public:
		int b;
		void get_ab(){
			a=19;
			b=23;
		}
		int get_a(){
			return a;
			
		}
		void show_a(){
			cout<<"The vlaue is: "<<a;
		}
		
};
class D: public B{
	int c;
	public:
		void mul(){
			c=b*get_a();
		}
		void dislplay(){
			cout<<"The value is: "<<get_a()<<"\n"<<b<<"\n"<<c;
		}
		
};
int main(){
	D d;
	d.get_ab();
	d.get_a();
	d.mul();
	d.dislplay();
	return 0;
}