//program to display fibonacci series to nth position
#include <stdio.h>
int main(){
	int i,a,b,c,n;
	a=0;
	b=1;
	printf("Enter the nth position upto which you want to print Fibonacci's series\n");
	scanf("%d",&n);
    printf("%d\t",a);
	printf("%d\t",b);
	for(i=2;i<=n;i++){
	c=a+b;
	a=b;
	b=c;
	printf("%d\t",c);
	}
   return 0;
		}
