//Display the pattern using nested for loop
//*
//* *
//* * * 
//* * * * 
//* * * * * 
//* * * * * *
#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			printf("*\t");
			}printf("\n");
			}
			return 0;
			}