//program to take matrix from user and display its transpose
#include <stdio.h>
int main(){
	int a[50][50],transpose[50][50],i,j,r,c;
	printf("Enter the rows and column of the matrix(r,c):\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of %d*%d matrix\n",r,c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			}
			} 
			printf("The entered matrix is:\n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					printf("%d\t",a[i][j]);
					}printf("\n");
					}
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
			transpose[j][i]=a[i][j];
					}
					}
					printf("The transpose of the matrix is:\n");
			for(i=0;i<c;i++){
				for(j=0;j<r;j++){
					printf("%d\t",transpose[i][j]);
					}printf("\n");
			}
			return 0;
			}
