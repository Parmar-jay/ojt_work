#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	int n,i,*ptr,sum=0;
	printf("\n Enter the no. of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Error!!");
		exit(0);
	}
	else{
		for(i=0;i<n;i++){
			printf("\n Enter the number= ");
			scanf("%d",&ptr[i]);
			
		}
		for(i=0;i<n;i++)
			printf("%d",ptr[i]);
            return 0; 
	}
}