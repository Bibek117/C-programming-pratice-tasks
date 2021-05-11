//scanf using "%[character]" and "%[^character]"
#include <stdio.h>
#include <string.h>
int main(){
	char a[50],b[50];
	printf("Enter any word including upper case lower case and space:\n");
	scanf("%[A-Za-z ]",a);
	printf("The word you entered is: %s\n",a);
	//use of ^ to not print certain letters and to print space
	printf("Enyer any word:\n");
	scanf("%[^\n^m]",&b);
	printf("The word you entered excluding letter m is:%s",b);
	return 0;
	}