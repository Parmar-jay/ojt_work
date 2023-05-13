#include<iostream>
using namespace std;
int main(){
	char c[30];
	int i;
	cout<<"Enter your name without whitespace: ";
	cin>>c;
	for(i=0;i<30;i++){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'){
			cout<<"Your name contain a vowel.";
			return 0;
		}
		
			
		}
		cout<<"Your name doesn't contain vowel.";
	    return 0;
	}
	