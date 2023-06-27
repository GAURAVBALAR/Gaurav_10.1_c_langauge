#include<stdio.h>

void divi(int n){
	if(n%3==0 && n%5==0){
		printf("The Number is divisible BY both 3&5");
	}else{
		printf("The Number is no divible BY either 3or5");
	}
}

void main(){
	int i;
	printf("Enter your Number :");
	scanf("%d",&i);
	divi(i);
}
