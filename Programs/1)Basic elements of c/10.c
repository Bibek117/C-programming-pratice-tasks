//program to change temperature from centrigrade to fahrenheit

#include <stdio.h>
int main(){
	float c,f;
	printf("Enter the temperature in centigrade:\n");
	scanf("%f",&c);
	f=(9*c+160)/5;
	printf("The temperature in fahrenheit is %f\n",f);
	return 0;
	}

