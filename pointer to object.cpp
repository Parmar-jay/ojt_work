#include<iostream>
using namespace std;
class item{
	int code;
	float price;
	public:
		void getdata(int c, float p){
			code=c;
			price=p;
		}
		void show(){
			cout<<"Code: "<<code<<endl;
			cout<<"Price: "<<price<<endl;
		}
};
int main(){
     int size=2;
     item *ptr=new item[size];
     item*d=ptr;
     int i,x;
     float y;
     for(i=0;i<size;i++){
     	cout<<"Value of code and Price: ";
     	cin>>x>>y;
     	ptr->getdata(x,y);
     	ptr++;
	 }
	 for(i=0;i<size;i++){
	 	cout<<"Item: "<<i+1<<"\n";
	 	d->show();
	 	d++;
		 }
		 return 0;
	 }