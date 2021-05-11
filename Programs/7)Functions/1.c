//program function to add,subtract,multiply and divide two numbers
#include <stdio.h>
float add(float a,float b){
	return a+b;
	}
	float sub(float a,float b){
		return a-b;
		}
		float multipy(float a,float b){
			return a*b;
			}
			void divi(float a,float b);
			int main(){
				float num1,num2,x,y,z,p;
				printf("Enter the first number:\n");
				scanf("%f",&num1);
				printf("Enter the second number:\n");
				scanf("%f",&num2);
				x=add(num1,num2);
				y=sub(num1, num2);
				z=multipy(num1,num2);
				divi(num1,num2);
				printf("The result of addition is %.2f\n",add(num1,num2));
				printf("The result of subtraction is %.2f\n",y);
				printf("The result of multiplication is %.2f\n",z);
				return 0;
				}
				
				void divi(float a,float b){
					float q;
					q=a/b;
					printf("The result of division is %.4f\n",q);
					}
