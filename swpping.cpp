
#include<stdio.h>
#include<conio.h>
int main()
{
     //program for swapping of character.
	 char x,y,temp;
	 printf(" Enter the character of x and y please write in form x,y:- ");
	 scanf("%c,%c",&x,&y);
	  
	 temp=x;
	 x=y;
	 y=temp;
	 printf("After swapping your x and y is= %c,%c \n",x,y);
	 getch(); 
	 return 0;
	
	
}