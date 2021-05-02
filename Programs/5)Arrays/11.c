//program to take two matrices from user and calculate their product
#include <stdio.h>
int main(){
	int first[10][10],second[10][10],multi[10][10];
	int r,c,m,n,i,j,k,sum=0;
	printf("Enter the rows and columns of first matrix(r,c):\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of %d*%d matrix:\n",r,c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&first[i][j]);
			}
			}
			printf("Enter the rows and column of second matrix(m,n):\n");
			scanf("%d%d",&m,&n);
			if(c!=m){
				printf("Not possible\n");
				}else{
				printf("Enter the elements of second matrix:\n");
				for(i=0;i<m;i++){
					for(j=0;j<n;j++){
						scanf("%d",&second[i][j]);
						}
						}
						for(i=0;i<r;i++){
							for(j=0;j<n;j++){
								for(k=0;k<m;k++){
				sum=sum+first[i][k]*second[k][j];
									}							
		multi[i][j]=sum;							
		sum=0;		
					}
						}
			printf("The multipled matrix is:\n");
			for(i=0;i<r;i++){
					for(j=0;j<n;j++){
				printf("%d\t",multi[i][j]);
								}		
				printf("\n");
							}}				
					return 0;
							}
