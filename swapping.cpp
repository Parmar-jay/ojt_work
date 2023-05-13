#include<stdio.h>
#include<conio.h>
int main(){

	int x,y;
	printf("Enter the x: ");
	scanf("%d",&x);
	printf("Enter the y: ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The value after swapping is x=%d and y=%d",x,y);
	return 0;
	
}