//program to display the entered number is divisible by 5 or not using if-else statement
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n%5==0){
		printf("The number is divisble by 5\n");
		}else{
		printf("The number is not divisible by 5\n");
        }
		return 0;
		}