//program to demostrate scanf() function and add,subtract,divide and multiply two numbers entered by user

#include <stdio.h>
int main(){
	float n1,n2,sum,diff,prod,div;
	printf("Enter the first number:\n");
	scanf("%f",&n1);
	printf("Enter the second number:\n");
	scanf("%f",&n2);
	sum=n1+n2;
	diff=n1-n2;
	prod=n1*n2;
	div=n1/n2;
	printf("\nResult of addition is=%f",sum);
	printf("\nResult of subtraction is=%f",diff);
	printf("\nResult of multiplication is=%f",prod);
	printf("\nResult of division is=%f",div);
	return 0;
	}
