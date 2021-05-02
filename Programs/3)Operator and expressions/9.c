//program to demostrate operator precedence and associativity in c
#include <stdio.h>
int main(){
	int a=5,b=10,c=-6;
	int x1,x2,x3,x4,x5;
	x1=a>b&&a<c;
	x2=a<b&&a>c;
	x3=a==c||b>a;
	x4=b>15&&c<0||a>0;
	x5=(a/2==0&&b/2!=0)||c<0;
	printf("x1=%d \tx2=%d \tx3=%d \tx4=%d \tx5=%d\n",x1,x2,x3,x4,x5);
	return 0;
	}
