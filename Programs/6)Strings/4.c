//length of string using strlen function
#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int len;
	printf("Enter a string:\n");
	gets(a);
	len=strlen(a);
	printf("The length of entered string is:%d\n",len);
	return 0;
	}
