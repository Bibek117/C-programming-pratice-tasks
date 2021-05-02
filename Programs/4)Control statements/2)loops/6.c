//display the factorial of given number by user using for loop
#include <stdio.h>
int main(){
	int i,n,fact=1;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fact=fact*i;
		}
		printf("The factorial of given number is %d\n",fact);
		return 0;
		}
