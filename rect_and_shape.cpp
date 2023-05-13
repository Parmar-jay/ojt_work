#include<iostream>
using namespace std;
class shape{
	protected:
		int width;
		int height;
		public:
			void setwidth(int w){
				width=w;
			}
			void setheight(int h){
				height=h;
			}
};
class rectangle: public shape{
	public:
		int getarea(){
			return width*height;
		}
		
};
int main(){
	rectangle rect;
	rect.setwidth(100);
	rect.setheight(45);
	cout<<"The area is: "<<rect.getarea()<<endl;
	return 0;
}