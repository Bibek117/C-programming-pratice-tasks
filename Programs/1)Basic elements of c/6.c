//to take principle, time , rate from the user and calculate the simple interest 
#include <stdio.h>
int main(){
	float rate,principle,time,interest;
	printf("Enter the principle(amount):\n");
	scanf("%f",&principle);
	printf("Enter the rate:\n");
	scanf("%f",&rate);
	printf("Enter the time(years):\n");
	scanf("%f",&time);
	interest=(principle*time*rate)/100;
	printf("The required simple interest is =%f\n",interest);
	return 0;
	}