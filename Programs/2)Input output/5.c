
//to write a= 10 and x=11.123456 in different formats
#include <stdio.h>
#include <conio.h>
int main(){
	int a= 10;
	float x=11.123456;
	printf("%-6d",a);
	printf("\n");
	printf("%+d",a);
	printf("\n");
	printf("%09d",a);
	printf("\n");
	printf("%d",a);
	printf("\n");
	printf("%#x",x);
	printf("\n");
	printf("%7.2f\n",x);
	getch();
	}
