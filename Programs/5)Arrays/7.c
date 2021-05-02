//program to take elements of matrix(2d array) and display them
#include <stdio.h>
int main(){
	int matrix[2][4],i,j;
	printf("Enter the elemnts of 2*4 matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("Enter the element [%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
			}
			}
			printf("The 2*4 matrix is:\n");
			for(i=0;i<2;i++){
				for(j=0;j<4;j++){
					printf("%d\t",matrix[i][j]);
					}
					printf("\n");
					}
					return 0;
					}
