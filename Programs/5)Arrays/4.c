//program to take ten numbers from user and store them in an array and finally display the smallest number among them
#include <stdio.h>
int main(){
	int num[10],i,swap;
	printf("Enter any 10 numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
		}
		for(i=1;i<10;i++){
			if(num[0]>num[i]){
				swap=num[0];
				num[0]=num[i];
				num[i]=swap;
				}
				}
				printf("The smallest number is %d\n",num[0]);
				return 0;
				}
