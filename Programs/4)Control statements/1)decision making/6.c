//to take any number and display the digit is one ,two,three or four digit number using if....elseif statement
#include <stdio.h>
int main(){
	int n;
	printf("Enter a number having 1 to 4 digits:\n");
	scanf("%d",&n);
	if(n<10){
		printf("The number is one digit number.\n");
		}
		else if(n>=10&&n<100){
			printf("The number is two digit number.\n");
			}else if(n>=100&&n<1000){
				printf("The number is three digit.\n");
				}else if(n>=1000&&n<10000){
					printf("The number is four digit number\n");
					}else{
						printf("Invalid number\n");
						}
						return 0;
						}