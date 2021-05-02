//program to make a simple arithmetic calculator using character switch 
#include <stdio.h>
int main(){
	float a,b,c;
	char op;
	printf("Enter the first number:\n");
	scanf("%f",&a);
	printf("Enter the second number:\n");
	scanf("%f",&b);
	printf("Enter the operator(+,-,*,/):\n");
	scanf(" %c",&op);
	switch(op){
		case '+':
		c=a+b;
		break;
		case '-':
		c=a-b;
		break;
		case '*':
		c=a*b;
		break;
		case '/':
		c=a/b;
		break;
		default:
		printf("Not valid opertor\n");
		}
		printf("Reslut of %.2f%c%.2f=%.3f\n",a,op,b,c);
		return 0;
		}
