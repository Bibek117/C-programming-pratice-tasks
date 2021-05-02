//program to find the sum of the digits of the number given by user
#include <stdio.h>
int main(){
	int a,n,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		sum+=a;
		n=n/10;
		}
		printf("The sum of digits is %d",sum);
		return 0;
		}
