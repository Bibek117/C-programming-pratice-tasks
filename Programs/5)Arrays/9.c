//program to take 3*3 matrix from user and display the diagonal element
#include <stdio.h>
int main(){
	int n[3][3],i,j;
	printf("Enter the elements of 3*3 matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&n[i][j]);
			}
			}
			printf("The diagional elements are:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(i==j){
						printf("n[%d][%d]=%d\n",i,j,n[i][j]);
						}
						}
						}
						return 0;
						}
