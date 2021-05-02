//use of ternary or conditional operator
#include <stdio.h>
int main(){
	int n1,n2,l;
	printf("Enter any two numbers \n");
	scanf("%d %d",&n1,&n2);
	l=n1>n2?n1:n2;
	printf("The larger number is %d\n",l);
	(n1-n2)>0?printf("wow it's positive"):printf("Haha it's negative");
	return 0;
	}
