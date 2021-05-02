//to illustrate pre and post increment and decrement operator
#include <stdio.h>
int main(){
	int a=10,b,c=5,d;
	b=a++;
    printf("b=%d\n",b);
	b=++a;
	printf("a=%d \tb=%d\n",a,b);
	d=--c;
	d=c--;
	printf("c=%d \td=%d\n",c,d);
	return 0;
	}
