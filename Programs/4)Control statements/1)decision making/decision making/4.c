/*C-program to read the values of coefficients of A,B and C of a quadratic equation and find the real roots of the equation.Use if else and if the roots are imaginary display the message "Roots are imaginary" and calculate the imaginary roots too*/
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	float d,root1,root2;
	printf("Enter a,b,c of a quadratic equation\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){ 
		printf("The roots are real\n");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("The real roots are:%.3f,%.3f\n",root1,root2);
		}
		else{ 
			printf("The roots are imaginary\n");
			printf("%.3f+%.3fi\n",-b/(2*a),sqrt(-d)/(2*a));
			printf("%.3f-%.3fi\n",-b/(2*a),sqrt(-d)/(2*a));
			}
			return 0;
			}
