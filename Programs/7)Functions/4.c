//program to calculate factorial of given number using recursive function
#include <stdio.h>
 long int fact(int n){
	if(n==1){
	return 1;
	}else{
		return (n*fact(n-1));
		}}
       int main(){
			int num;
			printf("Enter a numer whhose factorial is to be determined:\n");
			scanf("%d",&num);
			printf("The factorial is %ld\n",fact(num));
			return 0;
			}