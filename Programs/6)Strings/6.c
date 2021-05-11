//copy a strinf from one variable to another without using library function
#include <stdio.h>
#include <string.h>
int main(){
	char word1[]="Apple",word2[10];
	int i;
	for(i=0;word1[i]!='\0';i++){
		word2[i]=word1[i];
		}
		word2[i]='\0';
		printf("The copied word is:\n");
		puts(word2);
		return 0;
		}