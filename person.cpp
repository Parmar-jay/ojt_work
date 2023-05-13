#include<iostream>
using namespace std;
class person{
	char name[10];
	int age;
	
	public:
		person(){
			cout<<"Enter the name :";
			cin>>name;
			cout<<"Enter the age :";
			cin>>age;
		}
		void display();
};
void person::display(){
	cout<<"Name is :"<<name<<"\n";
	cout<<"Age is :"<<age<<"\n"<<endl;
}
int main(){
	person p;
	p.display();
	
}