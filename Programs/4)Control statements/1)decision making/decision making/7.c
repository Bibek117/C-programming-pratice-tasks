
//take three numbers and disolay the smallest using nested if
#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter any three numbers n1,n2,n3\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1<n2){
		if(n1<n3){
			printf("The smallest number is %d\n",n1);
			}else{
				printf("The smallest is %d\n",n3);
				}
				}
				else
				if(n2<n3){
					printf("The smallest is %d\n",n2);
					}else{ 
						printf("The smallest number is %d\n",n3);
						}
					return 0;
					}
