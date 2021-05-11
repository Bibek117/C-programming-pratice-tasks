//copy string using strcpy
#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	int i;
	printf("Enter the task you want to copy:\n");
	gets(a);
	strcpy(b,a);
	printf("The copied task is:\n");
	puts(b);
	return 0;
	}


