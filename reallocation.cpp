#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char *ptr;
	int size=3;
	ptr=(char*)malloc(size*sizeof(char));
	cout<<"Memory created successfullly";
	ptr=(char*)realloc(ptr,10*sizeof(char*));
	cout<<"\nNew memory created successfully";
	return 0;
}
