#include<iostream>
using namespace std;
int count;
class num{
	public:
		num(){
			count++;
			cout<<"Constructor is called :"<<count<<endl;
		}
		
};
int main(){
	cout<<"Inside main";
	cout<<"Creating object :-\n";
	num n1;{
	cout<<"Counting two objects :-\n";
	num n2,n3;

	}
	
return 0;
}