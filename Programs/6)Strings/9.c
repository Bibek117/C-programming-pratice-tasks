//concat using strcat function
#include <stdio.h>
#include <string.h>
int main(){
	char a[50],b[50];
	printf("Enter your first name(leave a space also):\n");
	gets(a);
	printf("Enter your last name:\n");
	gets(b);
	strcat(a,b);
	printf("Your full name is:\t");
	puts(a);
	return 0;
	}

