//program to write a function that calculates simple interest by taking principle ,time and rate as parameters 
#include <stdio.h>
float SI(float p,float t,float r){
	return (p*t*r)/100;
	}  
	int main(){
		float p,t,r,total;
	printf("Enter the principle,time(in yrs),rate,(p,t,r):\n");
	scanf("%f%f%f",&p,&t,&r);
		total=SI(p,t,r);
		printf("The simple interest is %.3f\n",total);
		return 0;
		}