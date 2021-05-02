//Display the pattern using nested for loop
//2 3 4 5 6 7
//2 3 4 5 6
//2 3 4 5
//2 3 4
//2 3
//2
#include<stdio.h>
int main(){
	int i,j;
	/*for(i=7;i>=2;i--){
		for(j=2;j<=i;j++){
			printf("%d\t",j);*/
			for(i=1;i<=6;i++){
				for(j=2;j<=8-i;j++){
					printf("%d \t",j);
			}
			printf("\n");
			}
			return 0;
			}