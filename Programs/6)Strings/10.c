//comapre two strings without using library function
#include <stdio.h>
#include <string.h>
int main(){
	char word1[50],word2[50];
	int i;
	printf("Enter the first word:\n");
	gets(word1);
	printf("Enter the second word:\n");
	gets(word2);
	for(i=0;word1[i]!='\0';i++){
		if(word1[i]!=word2[i]){
			break;
			}}
			if(word1[i]=='\0'&&word2[i]=='\0'){
				printf("The words are equal.\n");
				}else{
					printf("The words are not equal.\n");
					}
					return 0;
					}

