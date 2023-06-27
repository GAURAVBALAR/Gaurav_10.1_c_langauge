#include<stdio.h>
 
 void cube(int n){
 	n=n*n*n;
 	printf("Cube of the Number is : %d",n);
}

void main(){
	int i;
	printf("Enter your Number :");
	scanf("%d",&i);
	
	cube(i);
}
