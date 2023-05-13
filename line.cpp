#include<iostream>
using namespace std;
class line{
	double length;
	public:
		line(double len);
		void setlength(double len);
		double getlength();
};
line::line(double len){
	cout<<"Length is :"<<len;
}
void line::setlength(double len){
	length=len;
}
double line::getlength(){
	return length;
}
int main(){
	line line(50.7);
	line.setlength(39);
	cout<<"\n The new line is :"<<line.getlength();
	return 0;
}