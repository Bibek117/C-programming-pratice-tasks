//Program to test the input number is prime or not
#include <stdio.h>
int main(){
	int num,i;
	printf("Enter any number to check:\n");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("\nNot a prime number");
			break;
			}}
			if(i==num){
				printf("\nThe number is prime.");
				}
				return 0;
				}