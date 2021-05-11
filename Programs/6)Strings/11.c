//compare two strings using strcmp function
#include <stdio.h>
#include <string.h>
int main(){
	char x[50],y[50];
	int num;
	printf("Enter the first word:\n");
	gets(x);
	printf("Enter the second word:\n");
	gets(y);
	num=strcmp(x,y);
	printf("The first word is greater then second word by %d\n",num);
	return 0;
	}