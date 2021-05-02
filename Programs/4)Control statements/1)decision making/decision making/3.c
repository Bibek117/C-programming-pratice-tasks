//program to take a number and display "welcome the number is divisible by 2 and 3" if the number is even and divisible by 3 else display "Bad luck" using if else
#include <stdio.h>
int main(){
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	if(n%2==0&&n%3==0){
		printf("welcome the number is divisible by 2 and 3\n");
		}else{
		printf("Bad luck\n");
			}
			return 0;
			}
