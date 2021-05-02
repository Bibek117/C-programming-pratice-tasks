//program to find the reverse of number given by user
#include <stdio.h>
int main(){
	int a,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("The reverse of the nunber is:\n");
	while(n!=0){
		a=n%10;
		printf("%d",a);
		n=n/10;
		}
		return 0;
		}