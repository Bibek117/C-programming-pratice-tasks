//program to take two matrices from user and display their sum
#include <stdio.h>
int main(){
	int m1[30][30],m2[30][30],sum[30][30],i,j,r,c;
	printf("Enter the rows and coloumns of the matrices you want to add (r,c):\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of first matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&m1[i][j]);
	}
	}
	printf("Enter the elements of second matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&m2[i][j]);
			}
			}
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					sum[i][j]=m1[i][j]+m2[i][j];
					}
					}
					printf("The sum of the two matrices is:\n");
					for(i=0;i<r;i++){
						for(j=0;j<c;j++){
							printf("%d\t",sum[i][j]);
							}
							printf("\n");
							}
							return 0;
							}
