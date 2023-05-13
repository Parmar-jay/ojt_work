#include<iostream>
using namespace std;
class item{
    int num;
	static int count;
	public:
	void getdata(int a){
		a=num;
		count++;
	}	
	void getcount(){
		cout<<"count is:"<<count;
	}
	//int item::count;
};
int item::count;
int main(){
	item i1,i2,i3;
	i1.getcount();
	i2.getcount();
	i3.getcount();
	i1.getdata(123);
	i2.getdata(124);
	i3.getdata(43);
	i1.getcount();
	i2.getcount();
	i3.getcount();
	return 0;
}