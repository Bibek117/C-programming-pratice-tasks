//write a program that finds the sum of two number until the user wants using while loop
#include <stdio.h>
int main(){
	int n1,n2,sum;
	char choice='y';
	while(choice=='y'){
		printf("Enter two numbers you want to add n1,n2\n");
		scanf("%d%d",&n1,&n2);
		sum=(n1+n2);
		printf("The sum is %d\n",sum);
		printf("Do u want to add another two numbers again.If yes press'y' or press any other key to exit\n");
		scanf(" %c",&choice);
		}
		return 0;
}