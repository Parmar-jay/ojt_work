#include<iostream>
using namespace std;
class sample{
	int x;
	public:
		sample(){
			
		}
		sample(int a){
			x=a;
		}
		void display(){
			cout<<"The value is: "<<x;
		}
		
};
int main(){
	int a=23;
	sample s;
	s=a;
	s.display();
	return 0;
}
