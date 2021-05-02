//program to display multiplication table of any given number by user using for loop
#include <stdio.h>
int main(){
	int n,i;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("The multiplication table of %d is\n",n);
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);
		}
		return 0;
		}