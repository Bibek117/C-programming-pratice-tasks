//calculate the length of string without using library functions
#include <stdio.h>
#include <string.h>
int main(){
	char app[100];
	int i,count=0;
	printf("Enter and word:\n");
	gets(app);
	for(i=0;app[i]!='\0';i++){
		count++;
		}
		printf("The length of string is :%d\n",count);
		return 0;
		}