//program to find a^b using recursion
#include <stdio.h>
float power(float b,float p);
int main(){ 
	float base,pow,result;
	printf("Enter the base:\n");
	scanf("%f",&base);
	printf("Enter the power you want number to be raised:\n");
	scanf("%f",&pow);
	result=power(base,pow);
	printf("The answer is %.3f\n",result);
	return 0;
	}
	float power(float b,float p){
		if(p!=0){
          p--;
			return (b*power(b,p));
			}else{
				return 1;
				}}
