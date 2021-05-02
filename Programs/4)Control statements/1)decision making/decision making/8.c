/*take a number and determine various results The number is divisible by 7 and even or The number is divisible by 7 but odd or The number is not divisible by 7 and even or The number is not divisible by 7 and odd using nested if else*/
#include <stdio.h>
int main(){
	int n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	if(n%7==0){
		if(n%2==0){
			printf("The number is divisible by 7 and even.\n");
			}else{
				printf("The number is divisible by 7 but odd.\n");
				}
				}
				else
				if(n%2==0){
					printf("The number is not divisible by 7 and even.\n");
					}
					else{
						printf("The number is not divisible by 7 and odd.\n");
						}
						return 0;
						}
