//program to take some numbers from user and display them in ascending order (use bubble sort)
#include <stdio.h>
int main(){
	int num[50],i,j,n,swap;
	printf("Enter how many numbers you want to sort:\n");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(num[j]>num[j+1]){
				swap=num[j];
				num[j]=num[j+1];
				num[j+1]=swap;
					}
				}
				}
				printf("The sorted numbers in ascending orders are:\n");
				for(i=0;i<n;i++){
				printf("%d\n",num[i]);
					}
				return 0;
				}
