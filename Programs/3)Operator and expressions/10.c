//implict type conversion (type casting)
#include <stdio.h>
int main(){
	int i=6,x;
	float f=5.6;
	double d=7.5;
	long int l=50000;
	x=l/i+i*f-d;
	printf("x=%d\n",x);
	x=d;
	printf("x=%d\n",x);
	x=l;
	printf("x=%d\n",x);
	return 0;
	}