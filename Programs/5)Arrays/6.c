//program to take some numbers from user and display them in descending order (use selection sort)
#include <stdio.h>
int main(){
	int n[100],i,j,swap,a;
	printf("Enter how many numbers you want to sort:\n");
	scanf("%d",&a);
	printf("Enter %d numbers\n",a);
	for(i=0;i<a;i++){
		printf("Enter the number n[%d]:",i);
		scanf("%d",&n[i]);
		}
		for(i=0;i<a;i++){
			for(j=i+1;j<a;j++){
				if(n[i]<n[j]){
					swap=n[i];
					n[i]=n[j];
					n[j]=swap;
					}
					}
					}
		printf("The sorted numbers in descending orders are:\n");
					for(i=0;i<a;i++){
						printf("%d\n",n[i]);
						}
						return 0;
						}
