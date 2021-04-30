//program to take three different radii and display respective area (Use symbol constant)
#include <stdio.h>
#define PI 3.1416
int main(){
	float r1,r2,r3,a1,a2,a3;
	printf("Enter the first radius:\n");
	scanf("%f",&r1);
	printf("Enter the second radius:\n");
	scanf("%f",&r2);
	printf("Enter the third radius:\n");
	scanf("%f",&r3);
	a1=PI*r1*r1;
	a2=PI*r2*r2;
	a3=PI*r3*r3;
	printf("The area of circle having radius r1 is %f\n",a1);
	printf("The area of circle having radius r2 is %f\n",a2);
	printf("The are of circle having radius r3 is %f\n",a3);
	return 0;
	}