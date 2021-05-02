//program to convert number from decimal to binary
#include <stdio.h>
int main(){
	int n,q=1,rem,rev=0,i=1;
	printf("Enter the number in decimal\n");
	scanf("%d",&n);
    while(q!=0){
    	q=n/2;
    	rem=n%2;
    	n=q;
    	rev=rev+rem*i;
    	i=i*10;
    	}
    	printf("The binary converted digits is %d\n",rev);
    	return 0;
    	}
